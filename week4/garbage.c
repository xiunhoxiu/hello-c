#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", scores[i]);
    }
    /* this works (compiles and runs) but theres a logical bug - scores are not initalized. 
    computer don't mind but and output garbage values.*/ 
}
