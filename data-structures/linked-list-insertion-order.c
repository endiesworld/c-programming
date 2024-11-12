#include <stdlib.h>
#include <stdio.h>


typedef struct node{
    int number;
    struct node *next;
}node;

const int NODE_SIZE = 5;

int main(void) {
    node *node_null = NULL; // more like a temporary node pointer
    int number ;

    for (int i = 0; i < NODE_SIZE; i++) {

        node *current_node = malloc(sizeof(node));
        printf("Number: ");
        scanf("%d", &number);

        current_node->number = number;
        current_node->next = NULL;
        if(node_null == NULL){
            
            node_null = current_node;
        }
        else{
            for (node *ptr = node_null; ptr != NULL; ptr = ptr->next)
            {

                // if we get to the end of the node
                if (ptr->next == NULL)
                {
                    ptr->next = current_node;
                    break;
                }
            }
        }
    }

    for (node *ptr = node_null; ptr != NULL; ptr = ptr->next)
    {
        printf("%d\n", ptr->number);
    }

    node *ptr = node_null;
    while (ptr != NULL)
    {
        /* code */
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
    

    return 0;
}