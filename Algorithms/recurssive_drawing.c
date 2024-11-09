#include <stdio.h>

void draw(int n) ;


int main(void)
{
    int height;

    printf("Enter the numbers of rows you want: ");
    scanf("%d", &height);

    draw(height);
}

void draw(int n)
{

    if (n <= 0)

        return;

    draw(n - 1);

    for (int i = 0; i < n; i++){
        printf("#") ;
    }

    printf("\n") ;
}