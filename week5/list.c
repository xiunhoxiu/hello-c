#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;


int main (void)
{
    // List of size
    node *list = NULL;

    // Add a number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1; // quit the program
    }
    n -> number = 1;
    n -> next = NULL;

    // Update list to point to new node
    list = n;
    
    // Add a number to list
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        free (list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;

    list->next = n;


    // Add a number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {   
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3; 
    n->next = NULL;
    list->next->next = n;


    // print numbers
    /*  pointer arithmetic no longer comes into play 
        as it is us who are stitching together the datastruture in memory.
        [] cannot be used anymore as nodes are randomly located all over. */ 

    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }
    // you never have to free pointers - only free addresses that are returned to you by malloc.

    // Free list
    while (list != NULL)
    {
        node *tmp = list->next; // different tmp bc. it is in a different scope.
        free(list); // freeing the address in list, the address of number 1 node.
        list = tmp; // update the list to be tmp.
    }
    return 0;
}
