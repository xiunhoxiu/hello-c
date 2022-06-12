#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

long get_credit(void);
int get_length(long credit_card_number);
long multiply(long credit_card_number, int length_of_number);


int main(void) 
{
    long credit_card_number = get_credit();
    int length_of_number = get_length(credit_card_number);
    long multiplication = multiply(credit_card_number, length_of_number);
    
    long  even1, even2, even3, even4, even5, even6, even7, even8;
    even1 = ((credit_card_number % 10)/1);
    even2 = ((credit_card_number % 1000)/100);
    even3 = ((credit_card_number % 100000)/10000);
    even4 = ((credit_card_number % 10000000)/1000000);
    even5 = ((credit_card_number % 1000000000)/100000000);
    even6 = ((credit_card_number % 100000000000)/10000000000);
    even7 = ((credit_card_number % 10000000000000)/1000000000000);
    even8 = ((credit_card_number % 1000000000000000)/100000000000000);

    printf("%ld, %ld, %ld, %ld, %ld, %ld, %ld, %ld\n", even1, even2, even3, even4, even5, even6, even7, even8);

}


long get_credit(void)
{
    long card_number;
    do
    {
        card_number = get_long("Enter credit card number w/o hyphens: ");
        // get_long() rejects hyphens

    }while(card_number < 0); 

    return card_number;
}

int get_length(long credit_card_number)
{
    int count = 0, second_last, first_last; 
    
    do{ 
        credit_card_number = credit_card_number / 10; 
        count++; 
    }while (credit_card_number != 0);

    printf("length of the actual card number: %i\n", count);
    
    second_last = floor(count / 2);
    first_last = ceil((double)count/2);

    printf("length second last digits = %i\n", second_last);
    printf("length first last digits = %i\n", first_last);

    return second_last;
}

long multiply(long credit_card_number, int length_of_number)
{
    long second_to_last_digit;

    for (int i; i < length_of_number; i++)
    {
        second_to_last_digit = (credit_card_number % (long) pow(100,i+1))/ (long) pow(10, 2*i+1);
        printf("%ld ", second_to_last_digit);
    }
    
    return printf("\nreturn an array of integers multiplied by 2\n");
}