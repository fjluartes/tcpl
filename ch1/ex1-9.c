#include <stdio.h>

/* Ex. 1-9 Replace continuous blanks with one blank */
int main()
{
    int c, nb;
    nb = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            nb = 0;
            putchar(c);
        }
        if (c == ' ') {
            ++nb;
            if (nb == 1)
                putchar(c);
        }
    }
}
