#include <stdio.h>
#define MAXLINE 1000
#define COL 80

int mgetline(char line[], int maxline);

/* Ex. 1-22: fold long input lines */
int main()
{
    int len, i, j, nl, cl;
    char line[MAXLINE];
    nl = cl = 0;
    while ((len = mgetline(line, MAXLINE)) > 0) {
        if (len <= COL)
            printf("%s", line);
        else if (len > COL) {
            nl = len;
            while (nl > 0) {
                for (i = cl; i < COL; ++i)
                    putchar(line[i]);
                putchar('\n');
                nl = nl - i;
                cl = i;
            }
        }
    }
    return 0;
}

/* getline: read a line into s, return length */
int mgetline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i; 
    } 
    s[i] = '\0';
    return i;
}
