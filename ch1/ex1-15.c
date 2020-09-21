#include <stdio.h>
float convert(float n);

/* Ex. 1-15: Temperature conversion function */
int main()
{
    float i;
    for (i = 0.0; i <= 300.0; i = i + 20.0)
        printf("%3.0f %6.1f\n", i, convert(i));
    return 0;
}

float convert(float fahr)
{
    float celsius = (5.0 / 9.0) * (fahr - 32.0);
    return celsius;
}
