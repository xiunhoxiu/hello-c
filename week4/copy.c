#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    char *s = get_string("s: ");
    char *t = malloc(strlen(s+1)); // + 1 for the addition null character.

    strcpy(t,s); // copying from right to left. s is the source on the second arguemnt.

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}