#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int *x = malloc(3* sizeof(int)); // instead of 3 (spaces) * 4 (bytes) bc. people have different computers.
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);
}
