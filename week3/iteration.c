#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main (void)
{
    int height = get_int("height: ");

    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

/* 
recursive structere as it is defined in terms of itself.
Q: Describe what does a pyramid of height 4 look like?
A: A pyramid of height 3 plus one more row
Q: Describe what does a pyramid of height 3 look like?
A: A pyramid of height 3 plus one more row.
And so forth and it gets smaller until "what does a pyramid of no height look like"?
A: Things get negative. You would just stop the loop. - base case with no pyramid.
==> go to recursion.c
*/