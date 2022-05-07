#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    char *s = get_string("s: ");
    char *t = malloc(strlen(s+1)); // + 1 for the addition null character.
    if (t == NULL)
    {
        return 1; // if there is a problem
    }
    
    strcpy(t,s); // copying from right to left. s is the source on the second arguemnt.

    if(strlen(t) > 0) // what if there's no /0?
    {
         t[0] = toupper(t[0]); //risky.
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); // s gets freed by the CS50 library.
    return 0;
}