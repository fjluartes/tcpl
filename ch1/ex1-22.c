#include <stdio.h>
#define COL 80

/* Ex. 1-22: fold long input lines */
int main()
{
    int c, nc;
    nc = 0;
    while((c = getchar()) != EOF) {
        ++nc;
        if (nc == COL) {
            putchar(c);
            putchar('\n');
            nc = 0;
        }
        else
            putchar(c);
    }
    return 0;
}
