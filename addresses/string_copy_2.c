#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

    char *s = "Emmanuel";

    char *t = malloc((strlen(s) + 1) * sizeof(char)); // Dynamic memory allocation with malloc

    char *u = malloc((strlen(s) + 1) * sizeof(char)); // Dynamic memory allocation with malloc

    if( t == NULL ){
        return 1;
    }

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        t[i] = s[i];
    }

    strcpy(u, s); // Copy data from s into u

    t[0] = toupper(t[0]);
    u[0] = toupper(u[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
    printf("u: %s\n", u);

    free(u);
    free(t);
    
    return 0;

}