#include <stdio.h>
#define TABSTOP 8

/* Ex. 1-21: Replace spaces with tabs */
int main()
{
    int c, nb, nt, pos;
    nb = 0;
    nt = 0;
    for(pos = 1; (c = getchar()) != EOF; ++pos) {
        if (c == ' ') {
            if ((pos % TABSTOP) != 0)
                ++nb;
            else {
                nb = 0;
                ++nt;
            }
        }
        else {
            for ( ; nt > 0; --nt)
                putchar('\t');
            if (c == '\t')
                nb = 0;
            else
                for ( ; nb > 0; --nb)
                    putchar(' ');
            putchar(c);
            if (c == '\n')
                pos = 0;
            else if (c == '\t')
                pos = pos + (TABSTOP - (pos - 1) % TABSTOP) - 1;
        }
    }
    return 0;
}
