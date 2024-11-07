#include <stdio.h>

int main(int argc, char *argv[]){

    printf("hello, %s\n", argv[0]); // Name of the program

    // To prevent the code from printing (null) when a second argument is not provided
    if (argc == 2){
    printf("hello, %s\n", argv[1]);
    }

}