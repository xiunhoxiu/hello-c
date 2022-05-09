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

    int *tmp = malloc(4*sizeof(int)); // temporary allocate memory of size 4
    if(tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i ++)
    {
        tmp[i] = list[i]; // copy from list to tempory list
    }
    tmp[3] = 4; // hardcoding - add new number at the end of the new list.

    free(list); // free the old list of memory and then change it's value!

    list = tmp; // remember in the list variable what the addresses of this new chunk of memory.

    for( int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]); // print all values out.
    }
    return 0; // signify success.
}