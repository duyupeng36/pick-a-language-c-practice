/**
 * nc.c - count characters in input; 2st version 
 */

#include <stdio.h>

int main()
{
    double nc;
    for (nc = .0l; getchar() != EOF; nc += 1.0l);
    printf("%.0f\n", nc);
}