#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *file = fopen("phonebook.txt", "a");
    if (file == NULL){
        return 1;
    }

    char *name = malloc(100 * sizeof(char));
    char *number = malloc(100 * sizeof(char));

    if (name == NULL || number == NULL){

        return 1;
    }

    printf("Name: ");
    scanf("%99s", name);
    printf("Number: ");
    scanf("%99s", number);

    fprintf(file, "%s: %s\n", name, number);

    fclose(file);

    free(name);
    free(number);

    return 0;
}