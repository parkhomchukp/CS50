#include <stdio.h>
#include <cs50.h>
#include <math.h>

int get_positive_float(string prompt);
int main(void)
{
    float dollars;
    //getting positive float from user
    do
    {
        dollars = get_float("Enter number: ");  
    }
    while (dollars <= 0);
    //rounding to cents and transforming from float to int
    int coins = round(dollars * 100);
    int number = 0;
    //condition if user entered value more or equel 0.25
    if (coins >= 25)
    {
        do
        {
            coins = coins - 25;
            number++;
        }
        while (coins >= 25);
    }
    //condition for value more or equel 0.10
    if (coins >= 10)
    {
        do
        {
            coins = coins - 10;
            number++;
        }
        while (coins >= 10);
    }
    //condition for value more or equel 0.05
    if (coins >= 5)
    {
        do
        {
            coins = coins - 5;
            number++;
        }
        while (coins >= 5);
    }
    //condition for value more or equel 0.01
    if (coins >= 1)
    {
        do
        {
            coins = coins - 1;
            number++;
        }
        while (coins >= 1);
    }
    printf("Number: %i\n", number);
}
