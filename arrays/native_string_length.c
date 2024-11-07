#include <stdio.h>


int calc_length(char string[]) ;


int main(void) {
    long length ;
    char string[100];

    printf("Enter string here: ");
    scanf("%99s", string);

    length = calc_length(string);

    printf("Length of string: %d\n", length);

    return 0 ;

}


int calc_length(char string[]){
    int length = 0 ;

    while (string[length] != '\0')
    {
        length++;
    }
    
    return length ;
}

