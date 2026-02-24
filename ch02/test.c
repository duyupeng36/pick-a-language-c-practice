#include <stdio.h>

int main()
{
    int height = 74;

    printf("sizeof height: %lu bytes.\n", sizeof height);
    printf("sizeof(long long): %lu bytes.\n", sizeof(long long));
    printf("sizeof(height * height / 2): %lu bytes.\n", sizeof(height * height / 2));
}