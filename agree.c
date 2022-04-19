#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_string("Do you agree? ");

    // check whether user agreed
    if (c == 'y' || 'Y')
    {
        printf("Agreed.\n");

    }
    else if (c == 'n' || 'N')
    {
        printf("Not agreed.\n");
    }
        
}