#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;

}
person;



int main(void)
{
 
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1 617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    /*  
        string names[] = {"Carter", "David"};
        string numbers[] = {"+1 617-495-1000", "+1-949-468-2750"}; 
        // assuming phone numbers corresponses to the names array respectively
    */

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].number);
            // printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}