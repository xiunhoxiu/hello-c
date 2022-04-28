#include <stdio.h>
#include <cs50.h>


int main(int argc, string argv[])
{
    if (argc != 2) // Any argument count that is not 2.
    {
        printf("Missing command-line argument\n");
        return 1; // to show something went wrong (any nonzero no.)
    }

    printf("hello, %s\n", argv[1]);
    return 0;

    /* else
    {
        printf("hello, %s", argv[1]);
        return 0; 

        // return 0: signals the computer that all is well. However, 
            there is no need to use ELSE bc. 
           we already returned 1. And we dont need to return 0 either bc. the computer automatically returns 0.
           However it is good practice to return them explicitly for own understanding- 
    } 
    */

}