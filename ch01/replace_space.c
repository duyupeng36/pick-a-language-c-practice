/**
 * replace_space.c - Copy the input to the output program and replace consecutive spaces in it with a single space
*/

#include <stdio.h>
#include <stdbool.h> // c99

int main(void)
{
    int ch;
    bool prev_char_was_space = false;

    while((ch = getchar()) != EOF)
    {
        if (ch == ' ')
        {
            // If the previous character was not a space, 
            // print the current space character
            if (!prev_char_was_space)
            {
                putchar(ch);
                // Set the flag to indicate that the previous character was a space
                prev_char_was_space = true;
            }
        }
        else
        {
            // Print the current non-space character
            putchar(ch);
            // Set the flag to indicate that the previous character was not a space
            prev_char_was_space = false;
        }
    }
    return 0;
}