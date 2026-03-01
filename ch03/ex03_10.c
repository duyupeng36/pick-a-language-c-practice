/**
 * ex03_10.c - 从键盘输入两个整数，然后使用 if 语句输出一条消息
 * 
**/
#include <stdio.h>

int main(void)
{
    int number1, number2;
    printf("Enter two integer number: ");
    scanf("%d%d", &number1, &number2);
    
    if (number1 == number2)
    {
        printf("The two numbers you enter are equal.");
    }
    else
    {
        printf("The two numbers you enter are not equal.");
    }
    return 0;
}
// ex03_10.c