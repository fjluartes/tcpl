#include <stdio.h>
#define TOTALCHARS 128

/* Ex. 1-14: Histogram of character frequencies */
/* putchar with int value will display ascii char of the value */
int main()
{
    int c, i, j;
    int charnum[TOTALCHARS];
    for (i = 0; i < TOTALCHARS; ++i)
        charnum[i] = 0;

    while ((c = getchar()) != EOF)
        charnum[c] = charnum[c] + 1;

    for (i = 0; i < TOTALCHARS; ++i) {
        if (charnum[i] != 0) {
            putchar(i);
            for (j = 0; j < charnum[i]; ++j)
                putchar('*');
            putchar('\n');
        }
    }

}
