#include <stdio.h>

int main(){
    int variable_a, variable_b ;

    printf("Enter first integer variable: ");
    scanf("%d",&variable_a); // Get user input fot variable_a
    printf("Enter second integer variable: ");
    scanf("%d", &variable_b); // Get user input for second integer
    
    if (variable_a > variable_b)
    {
        printf("Variable a is greater than variable b.");
    }
    else if (variable_a < variable_b)
    {
        printf("Variable a is less than variable b.");
    }
    else
    {
        printf("Variable a is equal to variable b.");
    }

    return 0;
}