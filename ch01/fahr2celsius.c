/**
 * fahr2celsius.c - Convert Fahrenheit to Celsius.
 * Output of Fahrenheit vs. Celsius Temperature Control Table
 *
 * for fahr = 0, 20, ..., 300; floating-point arithmetic version
 */

#include <stdio.h>

int main(void)
{
    constexpr float fahr_lower = 0;
    constexpr float fahr_upper = 300;
    constexpr float fahr_step = 20;
    float fahr, celsius;

    for (fahr = fahr_lower; fahr <= fahr_upper; fahr = fahr + fahr_step)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.1f %6.1f\n", fahr, celsius);
    }
    return 0;
}