#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    int n = strlen(argv[1]);

    if (n != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must be alphabets only.\n");
            return 1;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("Key must not repeat.\n");
                return 1;
            }
        }
    }

    string text = get_string("plaintext: ");
    printf("ciphertext: ");

    int legth = 0;
    while (text[legth] != '\0')
    {
        legth++;
    }

    for (int k = 0; k < legth; k++)
    {
        int nth;
        if (isupper(text[k]))
        {
            nth = text[k] - 65;
            printf("%c", toupper(argv[1][nth]));
        }
        else if (islower(text[k]))
        {
            nth = text[k] - 97;
            printf("%c", tolower(argv[1][nth]));
        }
        else
        {
            printf("%c", text[k]);
        }
    }
    printf("\n");
    return 0;
}