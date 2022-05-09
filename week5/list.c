#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *list = malloc(3 * sizeof(int)); // dynamic allocating - resizing possible. 
    if(list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time passes

    int *tmp = malloc(4*sizeof(int)); 
    if(tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i ++)
    {
        tmp[i] = list[i]; 
    }
    tmp[3] = 4; 

    free(list); // free the old list of memory and then change it's value!

    list = tmp; 

    for( int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]); 
    }
    free(list); // free the new list at the end. All heap blocks were freed -- no leaks are possible.
    return 0; 
}