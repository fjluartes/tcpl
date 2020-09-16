#include <stdio.h>

/* counts characters in input; 2nd version */
/* ; only is a null statement */
int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}

/* counts characters in input; 1st version */
/* int main() */
/* { */
/*     long nc; */
/*     nc = 0; */
/*     while (getchar() != EOF)  */
/*         ++nc; */
/*     printf("%ld\n", nc); */
/* } */
