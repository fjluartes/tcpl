#include <stdio.h>

int brace, brack, paren;

void incomment(void);
void inquote(int c);
void search(int c);

/* Ex. 1-24: Check for syntax errors in C program */
int main()
{
    int c;
    extern int brace, brack, paren;
    while ((c = getchar()) != EOF) {
        if (c == '/') {
            if (c == '*')
                incomment();
            else
                search(c);
        }
        else if (c == '\'' || c == '\"')
            inquote(c);
        else
            search(c);
    }
    if (brace < 0) {
        printf("Unmatched braces\n");
        brace = 0;
    }
    else if (brack < 0) {
        printf("Unmatched brackets\n");
        brack = 0;
    }
    else if (paren < 0) {
        printf("Unmatched parenthesis\n");
        paren = 0;
    }
    if (brace > 0)
        printf("Unmatched braces\n");
    else if (brack > 0)
        printf("Unmatched brackets\n");
    else if (paren > 0)
        printf("Unmatched parenthesis\n");
    return 0;
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

/* inquote: check if inside quotes */
void inquote(int c)
{
    int d;
    putchar(c);
    while ((d = getchar()) != c)
        if (d == '\\')
            getchar();
}

/* search: search for matching brace, bracket, or parenthesis */
void search(int c)
{
    extern int brace, brack, paren;
    if (c == '{')
        --brace;
    else if (c == '}')
        ++brace;
    else if (c == '[')
        --brack;
    else if (c == ']')
        ++brack;
    else if (c == '(')
        --paren;
    else if (c == ')')
        ++paren;
}
