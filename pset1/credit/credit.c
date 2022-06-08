#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void) 
{
    long credit_card_number;
    do
    {
        credit_card_number = get_long("Enter credit card number w/o hyphens: ");
        // get_long() rejects hyphens

    }while(credit_card_number < 0); 

    int no1, no2, no3, no4, no5, no6, no7, no8, no9;
    no1 = ((credit_card_number % 100)/10);
    no2 = ((credit_card_number % 10000)/1000);
    no3 = ((credit_card_number % 1000000)/100000);
    no4 = ((credit_card_number % 100000000)/10000000);
    no5 = ((credit_card_number % 10000000000)/1000000000);
    no6 = ((credit_card_number % 1000000000000)/100000000000);
    no7 = ((credit_card_number % 10000000000000000)/10000000000000);
    no8 = ((credit_card_number % 1000000000000000000)/1000000000000000);


    printf("%i, %i, %i\n", no1, no6, no8);


}



