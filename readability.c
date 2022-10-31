#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    float l = (float) count_letters(text) / (float) count_words(text) * 100.0;
    float s = (float) count_sentences(text) / (float) count_words(text) * 100.0;
    float index = 0.0588 * l - 0.296 * s - 15.8;
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
}

int count_letters(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
        else
        {
            count += 0;
        }
    }
    return count;
}

int count_words(string text)
{
    int count = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
        else
        {
            count += 0;
        }
    }
    return count;
}

int count_sentences(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
        else
        {
            count += 0;
        }
    }
    return count;
}

//Coleman-Liau index; int index = 0.0588 * L - 0.296 * S - 15.8
// L is the average number of letters per 100 words (Letters/words*100)
// S is the average number of sentences per 100 words in the text. (sentences/ words*100)
//