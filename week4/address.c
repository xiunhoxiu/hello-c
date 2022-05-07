#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    
    string s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    
    /*
    ------
    without the cs50 library:
    char *s = "HI!";
    printf("%c\n", *s); // point to s which is the address of the first char in a string.
    printf("%c\n", *(s+1)); // pointer arithmetic - as the next char 'I''s address is a bit apart
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));

    char *s = "HI!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    printf("%c\n", s[5]); // literally the same as below
    ------


    string s = "HI!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    printf("%c\n", s[3]); // backslash 0  /0, - blank symbol bc. eight 0 bits that are unprintable.


    string s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);



    string s = "HI!";
    char *p = &s[0];
    printf("%p\n", p); // this is the address of the first character of s.
    printf("%p\n", s); // same address

    
    string s = "HI!";
    char c = s[0];
    char *p = &c;
    printf("%s\n", s);
    printf("%p\n", p);
    printf("%p\n", s); 
    // different addresses of p and s bc. c is a copy of the beginning of s.
   
    -----
    w/o the cs50 library

    char *s = "HI!";
    printf("%s\n", s);

    C does not have a string data typa
    -----

    int n = 50;
    int *p = &n; // declare a pointer
    printf("%p\n", p);
    printf("%i\n", n);  
    printf("%i\n", *p);  //dereference operator (go to that address) but will show the value in this location.
    */
    
    
}