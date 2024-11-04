#include <stdio.h>

int main(void){
    char first_character ;
    char second_character ;
    char third_character;

    printf("Enter the first character: ");
    scanf("%c", &first_character); // Get user input for first character
    printf("Enter the second character: ");
    scanf(" %c", &second_character); // Get user input for second character

    if (first_character == second_character){
        printf("The characters are the same\n");
    } else {
        printf("The characters are different\n");
    }

    printf("Do you agree ? enter 'Y or n: \n");
    scanf(" %c", &third_character);

    if (third_character == 'Y' || third_character == 'y')
    {
        printf("You agreed");
    }
    else if (third_character == 'N' || third_character == 'n')
    {
        printf("You did not agree\n");
    }
    else
    {
        printf("Invalid input \n");
    }
}