/**
 * ex02_06.c - 计算身体质量指数(Body Mass Index, BMI) 
 * 
 * 注意: BMI 计算公式为 BMI = W / (H * H)。其中 W 表示体重，单位为 kg; H 表示身高，单位为 m
**/
#include <stdio.h>

int main(void)
{
    const double pounds_per_kilogram = 2.2;
    const double meters_per_foot = 0.3048;
    double weight = 0.0;
    double height = 0.0;
    double bmi = 0.0;

    printf("Enter weight(pound): ");
    scanf("%lf%*c", &weight);
    printf("Enter height(foot): ");
    scanf("%lf%*c", &height);

    weight /= pounds_per_kilogram;  // pound ==> kilogram
    height *= meters_per_foot;      // feet ==> meter
    bmi = weight / (height * height);
    printf("Height %.2f m weight %.2f kg BMI = %.2f.\n", height, weight, bmi);
    return 0;
}
// ex02_06.c