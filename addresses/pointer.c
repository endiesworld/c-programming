#include <stdio.h>

int main()
{
    int num = 5;     // Regular integer variable
    int *ptr = &num; // Pointer to an integer, storing the address of num

    printf("Value of num: %d\n", num);                         // Prints 5
    printf("Address of num: %p\n", &num);                      // Prints the address of num
    printf("Value stored at ptr (dereferencing): %d\n", *ptr); // Prints 5 (value of num)
    printf("Address stored in ptr: %p\n", ptr);                // Prints the address of num
    printf("Address of num: %p\n", num);                      // This is wrong
    return 0;
}
