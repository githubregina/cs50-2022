#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int main(void)
{
    // Get text from user
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    // For checking
    // printf("%i letters\n", letters);
    // printf("%i words\n", words);
    // printf("%i sentences\n", sentences);
    double L = (float)letters / (float)words * 100;
    double S = (float)sentences / (float)words * 100;
    int index = round((0.0588 * L) - (0.296 * S) - 15.8);
    // For checking
    // printf("%lf %lf %d\n", L, S, index);
    if (index < 1)
    {
        printf("Before Grade 1");
    }
    else if (index < 16)
    {
        printf("Grade %i", index);
    }
    else
    {
        printf("Grade 16+");
    }
    printf("\n");
}

int count_letters(string text)
{
    int letters = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    int words = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }
    return words + 1;
}

int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == 33 || text[i] == 46 || text[i] == 63)
        {
            sentences++;
        }
    }
    return sentences;
}