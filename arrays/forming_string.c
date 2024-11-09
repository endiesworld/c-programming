#include <stdio.h>

int main(void){

    char *my_name = "Emmanuel" ; // *my_name is used here as pointer to the string, but it stores the address of the the first character in the string 'E'

    printf("String: %p\n", *my_name);

}