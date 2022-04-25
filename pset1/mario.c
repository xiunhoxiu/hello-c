#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n, i, j;

    do 
    {
        n = get_int("Size: ");
    }
    while(n < 1 || n > 8);


    for (i = 0; i < n; i++)
    {

        for(j = 0; j < n; j++)
        {
            if (i + j < n-1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }   
            
        }
        printf("  ");

        for(j = 0; j <= i; j++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    
}