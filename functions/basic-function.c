#include <stdio.h>

void makeSound(int n) ; // For compiler sake, because because the compiler reads sequentially, we do this(prototyping)
int getUserInput(void) ;

int main(void)
{
    int n = getUserInput();
    
    makeSound(n);
}


int getUserInput(void){
    int n;
    do
    {
        printf("Enter the numbers of sound you want to make: ");
        scanf("%i", &n);
    } while (n < 0);

    return n;
}

void makeSound(int n)
{
    for ( ; n > 0; n--)
    {
        printf("Bip! Bip!! Bip!!!\n");
        printf("n equals: %i\n", n);
    }
}