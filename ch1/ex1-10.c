#include <stdio.h>

/* Ex. 1-10: Replace \t, \b, and \\ */
int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\");
        else
            putchar(c);
    }
}
