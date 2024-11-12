#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    int number;
    struct node *next ;
}node;

const int NUM_NODES = 3;

int main(void) {

    node *list = NULL; // pointer to an address of a node
    int number ;

    // Linked list as a stack

    for (int i = 0; i< NUM_NODES; i++){
        node *new_node = malloc(sizeof(node));
        if(new_node == NULL){
            return 1;
        }

        printf("Number: ");
        scanf("%d", &number);

        new_node->number = number; // This is the same as (*new_node).number = number; where (*new_node) is dereferencing the address of the new node
        new_node->next = list ; // For the first operation, this contains a NULL pointer, consequently points to what list was pointed at in the exact previous operation

        list = new_node ; 
    }

    node *ptr = list ;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->number);
        ptr = ptr->next;
    }

    return 0 ;
}