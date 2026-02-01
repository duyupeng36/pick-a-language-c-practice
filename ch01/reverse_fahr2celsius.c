/**
 * reverse_fahr2celsius.c - Convert Celsius to Fahrenheit.
 * Output of Celsius vs. Fahrenheit Temperature Control Table
 * 
 * for celsius = 300, 280, ..., 0; floating-point arithmetic version
 */


#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    for (fahr = upper; fahr >= lower; fahr = fahr - step)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.1f %6.1f\n", fahr, celsius);
    }
    return 0;
}

