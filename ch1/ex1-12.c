#include <stdio.h>

/* Ex. 1-12: Print input one word per line */
int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') 
            printf("\n");
        else 
            putchar(c);
    }
}
