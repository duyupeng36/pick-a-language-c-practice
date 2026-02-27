/**
 * ex02_05.c - 计算圆的面积
 * 
 * 程序提示从键盘上输入圆的半径，然后输出圆的面积
**/

#include <stdio.h>

#define __USE_MISC
#include <math.h>

int main(void)
{
    double radius = 0.0;
    printf("Enter a radius: ");
    scanf("%lf%*c", &radius);  // 对于 double 类型，在使用 scanf 输入时，必须使用 %lf 
    double area = M_PI * radius * radius;
    printf("Area of a circle with radius %.2f is %.2f\n", radius, area);
    return 0;
}