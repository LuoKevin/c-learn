#include <stdio.h>

// Replaces tabs in inputs with spaces, such that the tab stops are preserved.
// Assumes tab stops every n columns
// n symbolic parameter
// i really like    to poop
// i really like  to poop

void tabStop(char *str, int n)
{
    int col = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] != '\t')
        {
            putchar(str[i]);
            ++col;
        }
        else
        {
            int spaces = n - (col % n);
            for (int j = 0; j < spaces; j++)
            {
                putchar(' ');
            }
            col += spaces;
        }
    }
    putchar('\n');
}

int main(int argc, char *argv[])
{
    tabStop("I\treally\tlike\tto\tpoop", 4);
    tabStop("I\treally\tlike\tto\tpoop", 3);
    tabStop("I\treally\tlike\tto\tpoop", 8);
    return 0;
}