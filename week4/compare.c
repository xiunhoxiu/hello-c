#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    printf("%s\n", s);
    printf("%s\n", t);
    printf("%p\n", s);
    printf("%p\n", t);
}