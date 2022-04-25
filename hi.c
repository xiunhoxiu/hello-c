#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    
    printf("%i %i %i\n", c1, c2 ,c3);
    // printing ASCII values (Unicode) - converting chars to ints.
    // To explicitly convert - use typecasting ..., (int) c1, (int) c2 , ... etc.
 }