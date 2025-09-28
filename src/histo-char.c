#include <stdio.h>
#include <string.h>

//count specific characters in input
//print histogram of those counts


//works only for lowercase and one input
int main(int argc, char *argv[]) {

    char *str = argv[1];
    int len = strlen(str);


    int counts[26]; //for a-z
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    for(int i = 0; i < len; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c: ", 'a' + i);
            printf("%d ", counts[i]);
            for (int j = 0; j < counts[i]; j++) {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}   
