#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // declare a pointer
    printf("%p\n", p);
    printf("%i\n", n);  
    printf("%i\n", *p);  //dereference operator (go to that address) but will show the value in this location.
    
}