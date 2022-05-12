#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *list = malloc(3 * sizeof(int)); // dynamic allocating - resizing possible. 
    if(list == NULL)
    {
        return 1;
    }

    // Assign three numbers to that array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time passes

    // Allocate new array of size 4
    int *tmp = malloc(4*sizeof(int)); 
    if(tmp == NULL)
    {
        free(list);
        return 1;
    }

    // Copy numbers from old array into new array
    for (int i = 0; i < 3; i ++)
    {
        tmp[i] = list[i]; 
    }
    // Add fourth number to new array
    tmp[3] = 4; 

    // free old array - "list of memory (address)" and then change it's value!
    free(list); 

    // Remember new array
    list = tmp; 

    // print new array
    for( int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]); 
    }

    // free the new array/list at the end. All heap blocks were freed -- no leaks are possible.
    free(list); 
    return 0; 
}