#include <stdio.h>
#include <string.h>

int main(void) {

    char *name_store[] = {"Emmanuel", "Adaobi", "Chidubem", "Sochikamuma", "Munachimso"} ;

    char search_name[100];

    printf("What name are you looking for: ");
    scanf("%s", &search_name);

    int store_len = sizeof(name_store)/ sizeof(name_store[0]);

    for (int i = 0; i < store_len; i++){
        int result = strcmp(name_store[i], search_name);
        if (result == 0){
            printf("Found %s in the store\n", search_name);

            return 0 ;
        }
    }
    printf("Could not find %s in the store\n", search_name);
    return 0 ;
}