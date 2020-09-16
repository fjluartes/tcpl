#include <stdio.h>

/* Ex. 1-4: Celsius to Fahrenheit Table */
int main()
{
    float celsius, fahr;
    float lower, upper, step;
  
    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("celsius    fahr\n");
    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%7.0f %7.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
