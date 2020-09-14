#include <stdio.h>

/* Print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300
   float version*/

int main()
{
    float fahr, celsius;
    float lower, upper, step;
  
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
