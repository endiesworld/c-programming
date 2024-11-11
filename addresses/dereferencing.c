#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *x; //Creating a variable x to store the address of an integer.
    int *y; //Creating a variable y to store the address of an integer.

    x = malloc(sizeof(int)); //Allocating memory for to store the address of an integer

    if (x == NULL){
        return 1;
    }

    *x = 42; // Putting the number 42 into the address
    // *y = 42; // putting the number 42 into the address but this will fail because no address is allocated for y yet.

    y = x; // Copy x into y i.e the address size not location of the address.

    *y = 13; // Put the number 13 into the address

    printf(" The address for x: %p\n ", x); // Print
    printf(" The address for y: %p\n ", y); // Print
    printf(" The value stored in the address for x: %d\n ", *x); // Print value in the address for x
    printf(" The value stored in the address for y: %d\n ", *y); // Print value in the address for y

    free(x); 
    free(y);

    return 0;
}