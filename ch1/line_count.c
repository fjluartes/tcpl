#include <stdio.h>

/* count lines in input */
/* single quotes represent numerical value of char inside it */
int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF) 
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}
