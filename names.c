#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percey", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "Ron") == 0) // (names[i] == "Ron") gives ERROR  // strcmp compare two strings case sensitively - returns an integer case
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}