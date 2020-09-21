#include <stdio.h>
#define MAXLINE 1000

int mgetline(char s[], int lim);
int remove_trail(char newline[]);

/* Ex. 1-18: Remove trailing blanks and tabs from each input line */
int main()
{
    int len, i;
    char line[MAXLINE];
    while ((len = mgetline(line, MAXLINE)) > 0)
        if (remove_trail(line) > 0)
            printf("%s", line);
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

/* remove_trail: Delete trailing blanks and tabs; Delete empty lines */
int remove_trail(char s[])
{
    int i;
    for (i = 0; s[i] != '\n'; ++i)
        ;
    --i;
    /* remove trailing blanks and spaces */
    for (i > 0; (s[i]==' ' || s[i]=='\t'); --i)
        ;
    if (i >= 0) {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}
