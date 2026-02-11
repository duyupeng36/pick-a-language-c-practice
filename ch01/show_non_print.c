/**
 * show_non_print.c - Copy the input to the output program and show non-printable characters in a visible form
 */

#include <stdio.h>

int main(void)
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (ch == '\n')
        {
            putchar('\\');
            putchar('n');
        }
        else if (ch == '\r')
        {
            putchar('\\');
            putchar('r');
        }
        else
        {
            putchar(ch);
        }
    }
    return 0;
}
