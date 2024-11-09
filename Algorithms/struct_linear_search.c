#include <string.h>
#include <stdio.h>

typedef struct{
    char *name;
    char *phone_number;
} person ;


int main(void) {

    person people[] = {
        {
            "Emmanuel",
            "+1-551-331-4745",
        },
        {
            "Adaobi",
            "+1-221-331-4745",
        },
        {
            "Ugochukwu",
            "+1-221-891-4745",
        }
    };

    char name[100] ;

    printf("Please enter a name: ");
    scanf("%s", name) ;

    for (int i = 0 ; i < 3 ; i++){
        if(strcmp(people[i].name, name) == 0){
            printf("Phone number %s\n", people[i].phone_number);
            return 0;
        }
    }

    printf("Name does not exist\n");
}