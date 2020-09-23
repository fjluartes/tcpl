#include <stdio.h>
#define TABSTOP 8

/* Ex. 1-21: Replace spaces with tabs */
int main()
{
    int c, ns, nt, pos;
    ns = 0;
    nt = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ') {
            ++ns;
        }
    }
}
