#include <stdio.h>


void meow(void); // declare a function at the top


int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}


void meow(void) // return nothing and takes no input, purpose: visual effects, defining a func after main.
{
    printf("meow\n");
}