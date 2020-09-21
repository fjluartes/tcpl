#include <stdio.h>
#define MAXLINE 1000

int mgetline(char line[], int maxline);
void reverse(char str[]);

/* Ex. 1-19: Reverse a character string line. */
int main()
{
    int len, i;
    char line[MAXLINE];
    while ((len = mgetline(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
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

/* reverse: reverse a character string */
void reverse(char str[])
{
    int len, j;
    char temp;
    for (len = 0; str[len] != '\n'; ++len)
        ;
    --len;
    for (j = 0; j <= len; ++j) {
        temp = str[len];
        str[len] = str[j];
        str[j] = temp;
        --len;
    }
}
