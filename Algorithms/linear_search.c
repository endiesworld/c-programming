#include <stdio.h>


int main(void) {
    int store[] = {5, 20, 10, 8, 100, 30, 50, 70} ;

    int search_value ;

    printf("What number would you like to search for: ");
    scanf("%d", &search_value);

    int store_size = sizeof(store)/sizeof(store[0]);

    for(int i = 0; i < store_size; i++){
        if (store[i] == search_value){
            printf("Found %d in the store\n", search_value);
            return 0;
        }
    }
    printf("Could not find %d in the store\n", search_value);
    return 1 ;
}