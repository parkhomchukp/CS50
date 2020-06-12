#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// taking values from command line
int main(int argc, string argv[])
{
    int a;
    // converting value from type string to int
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (strlen(argv[1]) >= 1)
    {
        a = atoi(argv[1]);
    }
    if (argc == 2 && a > 0)
    {
        // getting text from user
        string text = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, s = strlen(text); i < s; i++)
        {
            int x1 = text[i] + a;
            if (islower(text[i]) && text[i] + a > 'z')
            {
                do
                {
                    x1 = x1 - 26;
                }
                while (x1 > 'z');
                printf("%c", x1);
            }
            else if (isupper(text[i]) && text[i] + a > 'Z')
            {
                printf("%c", (text[i] - 26) + a);
            }
            else if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            {
                printf("%c", text[i] + a);
            }
            else
            {
                printf("%c", text[i]);
            }
        }
        printf("\n");
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}
