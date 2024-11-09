#include <ctype.h>
#include <stdio.h>
#include <string.h>

typedef char *string ;

int main(void)
{

    string data[100];

    printf("Enter a string: ");
    scanf("%s", data); // the same as scanf("%s", &data);

    string t = data; // The wigle sign is just a warning stating that data does not a value yet. t and data point points to the address i.e we are assigning the address of data to t.

    t[0]  = toupper(t[0]);

    printf("s: %s\n", data);
    printf("t: %s\n", t);

return 0;
}