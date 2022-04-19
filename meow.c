#include <stdio.h>


void meow(int n); // declare a function at the top


int main(void)
{
    meow(3);
}


void meow(int n) //void returns nothing, defining a func after main.
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}