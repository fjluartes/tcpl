#include <stdio.h>

void mcomment(int c);
void incomment(void);
void echo_quote(int c);

/* Ex. 1-23: Remove all comments from a C program */
int main()
{
    int c;
    while((c = getchar()) != EOF) {
        mcomment(c);
    }
    return 0;
}

/* mcomment: checks if char is inside comment or not */
void mcomment(int c)
{
    int d;
    if (c == '/') {
        if ((d = getchar()) == '*')
            incomment();
        else if (d == '/') {
            putchar(c);
            mcomment(d);
        }
        else {
            putchar(c);
            putchar(d);
        }
    }
    else if (c == '\'' || c == '\"')
        echo_quote(c);
    else
        putchar(c);
}

/* incomment: check if still inside comment */
void incomment()
{
    int c, d;
    c = getchar();
    d = getchar();
    while (c != '*' || d != '/') {
        c = d;
        d = getchar();
    }
}

/* echo_quote: print quotes and character constants */
void echo_quote(int c)
{
    int d;
    putchar(c);
    while ((d == getchar()) != c) {
        putchar(d);
        if (d == '\\')
            putchar(getchar());
    }
    putchar(d);
}
