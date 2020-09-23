#include <stdio.h>
#define MAXCOL     80
#define TABVAL     8
#define CURTAB(c)  (TABVAL - ((c) % TABVAL))
#define NOBLANK    -1 

int lastblank(const char arr[], int len);

/* Ex. 1-22-2: another solution */
int main()
{
    int c;
    int i, j;
    int pos;
    int col;
    int lbc;
    char line[MAXCOL + 1];
    pos = col = 0;
    while ((c = getchar()) != EOF) {
        line[pos++] = c;
        col += (c == '\t') ? CURTAB(col) : 1;
        if (col >= MAXCOL || c == '\n') {
            line[pos] = '\0';
            if ((lbc = lastblank(line, pos)) == NOBLANK) {
                for (i = 0; i < pos; ++i)
                    putchar(line[i]);
                col = pos = 0;
            }
            else {
                for (i = 0; i < lbc; ++i)
                    putchar(line[i]);
                for (i = 0, j = lbc + 1, col = 0; j < pos; ++i, ++j) {
                    line[i] = line[j];
                    col += (c == '\t') ? CURTAB(col) : 1;
                }
                pos = i;
            }
            putchar('\n');
        }
    }
    return 0;
}

/* finds last whitespace char in array and returns its position */
int lastblank(const char arr[], int len)
{
    int i, lbc;
    lbc = -1;
    for (i = 0; i < len; ++i)
        if (arr[i] == ' ' || arr[i] == '\t' || arr[i] == '\n')
            lbc = i;
    return lbc;
}
