#include <stdio.h>

// replaces strings of blanks by min numb of tabs and blanks to achieve same spacing
// assumes tab stops every n columns

// iterate thru string
// if not blank space, then move on to next
// if blank, then count num of blanks ahead,
// put spaces to get to next tab stop, then
// putchar spaces / n tabs, then output spaces % n spaces

// keep var col to keep track which column u are on
// 0123456789
// i   do   l
void putNChars(char ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        putchar(ch);
    }
}

// i really like  to poop

void entab(char *str, int n)
{
    int col = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            putchar(str[i]);
            ++col;
            i++;
        }
        else
        {
            int spaces = 0;
            while (str[i] == ' ')
            {
                ++spaces;
                i++;
            }
            int toNextStop = (n - (col % n)) % n;
            if(spaces < toNextStop) {
                putNChars(' ', spaces);
                col += spaces;
                continue;
            }
            int spacesLeft = spaces - toNextStop;
            putNChars(' ', spacesLeft);
            col += spacesLeft;
            spaces -= spacesLeft;
            int tabsToPrint = spaces / n;
            int spacesToPrint = spaces % n;
            putNChars('\t', tabsToPrint);
            putNChars(' ', spacesToPrint);
            col += spacesToPrint;
        }
    }
    putchar('\n');
}

int main()
{

    entab("I   really   like  to       poop", 4);
    entab("I   really   like  to       poop", 3);
    entab("I   really   like  to       poop", 8);
    printf("This is a temporary table example.\n");
    return 0;
}