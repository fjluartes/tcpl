#include <stdio.h>
#define MAXLINE 1000
#define LIMIT 80

int mgetline(char line[], int maxline);

/* Ex. 1-17: Print all input lines longer than 80 characters. */
int main()
{
    int len;
    char line[MAXLINE];
    while ((len = mgetline(line, MAXLINE)) > 0) 
        if (len > LIMIT) 
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
