#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //getting card number from user
    long card = get_long("Card number: ");
    //forming every digit separately
    int i16 = (card % 10);
    int i15 = (((card / 10) % 10) * 2);
    int i14 = ((card / 100) % 10);
    int i13 = (((card / 1000) % 10) * 2);
    int i12 = ((card / 10000) % 10);
    int i11 = (((card / 100000) % 10) * 2);
    int i10 = ((card / 1000000) % 10);
    int i9 = (((card / 10000000) % 10) * 2);
    int i8 = ((card / 100000000) % 10);
    int i7 = (((card / 1000000000) % 10) * 2);
    int i6 = ((card / 10000000000) % 10);
    int i5 = ((card / 100000000000) % 10);
    int t5 = i5 * 2;
    int i4 = ((card / 1000000000000) % 10);
    int i3 = ((card / 10000000000000) % 10);
    int t3 = i3 * 2;
    int i2 = ((card / 100000000000000) % 10);
    int i1 = ((card / 1000000000000000) % 10);
    int t1 = i1 * 2;
    // amount of digits which are more than 9
    if (i15 > 9)
    {
        i15 = i15 - 9;
    }
    if (i13 > 9)
    {
        i13 = i13 - 9;
    }
    if (i11 > 9)
    {
        i11 = i11 - 9;
    }
    if (i9 > 9)
    {
        i9 = i9 - 9;
    }
    if (i7 > 9)
    {
        i7 = i7 - 9;
    }
    if (t5 > 9)
    {
        t5 = t5 - 9;
    }
    if (t3 > 9)
    {
        t3 = t3 - 9;
    }
    if (t1 > 9)
    {
        t1 = t1 - 9;
    }
    //amount of all doubeled and nondoubeled digits
    int sum = (i15 + i13 + i11 + i9 + i7 + t5 + t3 + t1 + i16 + i14 + i12 + i10 + i8 + i6 + i4 + i2);
    //definition of last digit of amount
    int j = sum % 10;
    //definition of card type
    if (j == 0)
    {
        if (i1 == 0 && (i2 == 3 && (i3 == 4 || i3 == 7)))
        {
            printf("AMEX\n");
        }    
        else if (i1 == 5 && (i2 == 1 || i2 == 2 || i2 == 3 || i2 == 4 || i2 == 5))
        {
            printf("MASTERCARD\n");
        }
        else if (i1 == 4 || (i1 == 0 && i2 == 0 && i3 == 0 && i4 == 4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
