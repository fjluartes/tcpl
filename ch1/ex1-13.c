#include <stdio.h>

/* Ex. 1-13: Histogram of length of words in input */
int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            putchar('\n');
        else
            putchar('*');
    }
}
