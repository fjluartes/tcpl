#include <stdio.h>

/* Ex. 1.6: Verify getchar() != EOF is 0 or 1 */
/* Input EOF
   Unix/Linux: C-d
   Windows: C-z
 */
int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        printf("%d ", c != EOF);
        putchar(c);
    }
    printf("%d\n", c != EOF);
}
