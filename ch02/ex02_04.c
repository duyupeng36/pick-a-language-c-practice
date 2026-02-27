/**
 * ex02_04.c - 把英寸统一转换成英尺和英寸
 * 
 * 例如，用户输入 77 英寸，程序输出 6 英尺 5 英寸。注意，1 英尺 = 12 英寸
**/

#include <stdio.h>

int main(void)
{
    unsigned int inches = 0, feet = 0;
    const unsigned int inches_per_foot = 12;

    printf("Enter a positive number: ");
    scanf("%u%*c", &inches);

    feet = inches / inches_per_foot;
    inches %= inches_per_foot;
    printf("%u inches = %u feet %u inches.\n", inches + feet * inches_per_foot, feet, inches);
    return 0;
}
