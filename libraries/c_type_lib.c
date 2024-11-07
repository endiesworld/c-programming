#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int agrc, char arg[])
{
   
    char s[100] ;
    printf("Enter your stirng here: ");
    scanf("%99s", s) ;

    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++){

        // if (s[i] >= 'a' && s[i] <= 'z'){

        //     // Change s[i] to uppercase
        //     printf("%c", s[i] - ('a' - 'A'));
        // }
        // else{
        //     printf("%c", s[i]);
        // }
        // The codes above can be replaced by just using a library function from ctype.h
        printf("%c", toupper(s[i]));
    }

}
