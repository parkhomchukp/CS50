#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int shift(char c);
int main(int argc, string argv[])
{
    char a;
    int key, x1;
    string text;
    //checking the number of arguments in command line
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    //checking for an alphabetic characters
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        a = argv[1][i];
        if (isalpha(a) == false)
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
    //getting string from user
    text = get_string("plaintext: ");
    printf("ciphertext: ");
    //output of encrypted text
    for (int i = 0, j = 0, s = strlen(text), s1 = strlen(argv[1]); i < s; i++, j++)
    {
        //key identification
        key = shift(argv[1][j]);
        //changing letter identification
        x1 = text[i];
        // rule for changed letter which is more than "ASCII" aphabetic character
        if ((islower(x1) && x1 + key > 'z') || (isupper(x1) && x1 + key > 'Z'))
        {
            x1 = x1 + key - 26;
            printf("%c", x1);
        }
        //rule for normal alphabetic character
        else if (isalpha(x1))
        {
            printf("%c", x1 + key);
        }
        //rule for punctuation marks and spaces
        else
        {
            printf("%c", x1);
        }
        //return the value of the key to the first letter of the word
        if (j >= s1 - 1)
        {
            j = -1;
        }
        //unchanging key for punctuation marks and spaces
        if (ispunct(text[i]) || isspace(text[i]))
        {
            j--;
        }
    }
    //exit the script
    printf("\n");
    return 0;
}

// function which defines an integer key from letter
int shift(char c)
{
    int c1;
    if (islower(c))
    {
        c1 = c - 97;
    }
    if (isupper(c))
    {
        c1 = c - 65;
    }
    return c1;
}
