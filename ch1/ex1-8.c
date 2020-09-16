#include <stdio.h>

/* Ex. 1-8: count lines in input */
int main()
{
    int c, nl, nb, nt;
    nb = 0;
    nt = 0;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        if (c == '\t')
            ++nt;
        if (c == '\n') 
            ++nl;
    }
    printf("blanks: %d\n", nb);
    printf("tabs: %d\n", nt);
    printf("newlines: %d\n", nl);
}
