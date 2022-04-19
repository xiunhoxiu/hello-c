#include <stdio.h>


void meow(void) // return nothing and takes no input, purpose: visual effects
{
    printf("meow\n");
}

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}