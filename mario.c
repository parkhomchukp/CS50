#include <stdio.h>
#include <cs50.h>

int get_positive_int(string prompt);

int main(void)
{
    int height;
    //getting value of hihgt
    height = get_positive_int("Height: ");
    //main cycle for new lines
    for (int enters = 0; enters < height; enters++)
    {
        //cycle for typing spaces
        for (int spaces = height - 1; spaces > enters; spaces--)
        {
            printf(" ");
        }
        //cycle for typing hashes
        for (int hashes = -1; hashes < enters; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}

//function for getting only positive integer from 1 to 8 from user
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 8);
    return n;
}
