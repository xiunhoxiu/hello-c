#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number = 5;
    int guess = get_int("What's your guess? ");

    while(guess != number)
    {
        printf("Wrong guess!");
    }   

    printf("You're correct!");
}