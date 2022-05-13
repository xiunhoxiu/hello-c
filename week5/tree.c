// Implements a list of numbers as a binary search tree

#include <stdio.h>
#include <stdlib.h>

// Represents a node
typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

void free_tree(node *root);
void print_tree(node *root);

int main(void)
{
    // Tree of size 0
    node *tree = NULL;

    // Add number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2;  //the root number.
    n->left = NULL;
    n->right = NULL;
    tree = n; // initalize the tree to be equal to that pearticular node.

    // Add number to list
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        //free memory
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n; /* initalize the tree left child to be n. 
                        Want 1 to be the new left child
                        Stitching togther with a pointer from 2 to 1.*/


    // Add number to list
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n; // updating the tree's right child (3) to be the new node.

    // print tree
    print_tree(tree);

    // Free tree
    free_tree(tree);
}

void free_tree(node *root)
{
    if(root == NULL)
    {
        return;
    }
    free_tree(root->left);
    free_tree(root->right);
    free(root); /* frees only the address at that root.  
                    it is important to free the root last bc. 
                    if you freed the root first, you cannot reach
                    the left child and the right child anymore.
                    the memory address is no longer valid at that point. */


}


void print_tree(node *root)
{
    if (root == NULL)
    {
        return; // just return, as it is a void function
    }
    print_tree(root->left); // print left sub-tree
    printf("%i\n", root->number); // print own root
    print_tree(root->right); // print right sub-tree

    // recursion - the data structure itself is recursive.
}