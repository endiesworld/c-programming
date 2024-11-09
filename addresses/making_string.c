#include <stdio.h>

typedef char * string;

int main(void) {

    string my_name = "Emmanuel";

    string surname[100] ;

    printf("Enter your surname: ");
    scanf("%s", &surname);

    printf("Full Name: %s, %s\n", my_name, surname);

    string s = "HI!";
    printf("%p\n", s); // Gives you the address of the first element 'H'. We did not have to do '&s' because in C 'char *' whcih is what string represents is a pointer to char.
    printf("%p\n", &s[0]); // pointer to the address of the first element 'H'.
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);

    printf("**********************************************\n") ;
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);

    printf("***********POINTER ARITHMETICS****************\n");
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));

    return 0;
}