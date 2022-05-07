#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string s = get_string("Before: ");
    printf("After:  ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));   
    }
    printf("\n");

    /* for (int i = 0, n = strlen(s); i < n; i++)
    {

        //islower returns non-zero int if lowercase and 0 (false) if not a lowercase.
        // this works bc. it uses any other value to represent true. If lower it prints out the character minus 32. 
        // can also be written islower(s[i]) != 0
       
        if(islower(s[i])) 
        {
            printf("%c", toupper(s[i])); 
           
        }
        else
        {
            printf("%c", s[i]);
        } 
        
    }
    printf("\n"); */
    
/*  
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Q: is the current letter lowercase?
            //lowercase a is 97
            //lowercase z is 122
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i]-32); // force to uppercase
            // 97-32 = 65 which gives the uppercase A (ASCII)
        }
        else
        {
            printf("%c", s[i]);
        } 
        
    }
    printf("\n");
*/
}