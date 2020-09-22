#include <stdio.h>
#define TABSTOP 8

/* Ex. 1-20: Replace tabs to equivalent spaces */
int main()
{
    int c, pos, nb;
    nb = 0;
    pos = 1;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            nb = TABSTOP - ((pos - 1) % TABSTOP);
            while (nb > 0) {
                putchar('0');
                ++pos;
                --nb;
            }
        }
        else if (c == '\n') {
            putchar(c);
            pos = 1;
        }
        else {
            putchar(c);
            ++pos;
        }

    }
    return 0;
}
