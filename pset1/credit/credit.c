#include <cs50.h>
#include <stdio.h>




int main(void) 
{
    long credit_card_number;
    do
    {
        credit_card_number = get_long("Enter credit card number: ");
        // get_long() rejects hyphens

    }while(credit_card_number < 0);

}



