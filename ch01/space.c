/**
 * space.c - count space characters in input
 */

#include <stdio.h>

int main(void)
{
    int ch;
    long number_space = 0;
    long number_tab = 0;
    long number_newline = 0;

    while((ch = getchar()) != EOF)
    {
        if (ch == ' ')
            ++number_space;
        
        if (ch == '\t')
            ++number_tab;
        
        if (ch == '\n')
            ++number_newline;
    }
    printf("spaces: %ld, tabs: %ld, newlines: %ld\n",
           number_space, number_tab, number_newline);
}