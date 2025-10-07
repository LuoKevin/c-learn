#include <stdio.h>
#include <string.h>
/*
    Print a histogram of the frequencies of different characters in its input.
*/

int main(int argc, char *argv[])
{
    int word_lengths[argc];

    for (int i = 0; i < argc; i++)
    {
        word_lengths[i] = strlen(argv[i]);
    }

    for (int i = 0; i < argc; i++)
    {
        printf("%s: ", argv[i]);
        for (int j = 0; j < word_lengths[i]; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}