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
    
}