/**
 * ex03_11.c - 输入两个正整数，判断其中一个是否是另一个的倍数
 * 
**/
#include <stdio.h>

int main(void)
{
    int number1, number2;
    printf("Enter two integer numbers: ");
    scanf("%d%d", &number1, &number2);
    if (number1 < number2)
    {
        number1 += number2;
        number2 = number1 - number2;
        number1 = number1 - number2;
    }
    if (!(number1 % number2))
    {
        printf("%d is a multiple of %d\n", number1, number2);
    }
    else
    {
        printf("%d is not a multiple of %d\n", number1, number2);
    }
    return 0;
}
// ex03_11.c