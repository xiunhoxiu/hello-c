#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int n)
{
    if (n <= 0) /* to be safe if user type a neg. no. Without < you'd accidently touch the memory of the computer. 
                    The func. got called upon thousands of times until it eventually bailed:
                    "Segmentation fault (core dumped)" */
    {
        return; // as the func. is a void, just return suffices.
    } 
    /* THIS IS THE BASE CASE that ensures that the cyclical process does not run forever. 
        Without this - it would loop forever.*/

    draw(n-1); /* this is only going to run the draw func. forever, unless there's a condition (like above). 
                    When to not call draw? When n is 1 */
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}