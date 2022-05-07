#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    string s = "HI!";
    string t = "BYE!";
    
    
    
    printf("%i %i %i\n", c1, c2 ,c3);
    // printing ASCII values (Unicode) - converting chars to ints.
    // To explicitly convert - use typecasting ..., (int) c1, (int) c2 , ... etc.
    
    printf("%i %i %i\n", s[0], s[1], s[2]); // a string is an array of chars.
    printf("%s\n", s);
    printf("%s\n", t);
 }