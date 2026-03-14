/**
 * power.c - 定义 power() 函数
 * 
**/

double power(double x, int n)
{
    double result = 1.0;
    if ( n >= 0)
    {
        for (int i = 1; i <= n; ++i)
        {
            result *= x;
        }
    }
    else
    {
        for (int i = 1; i <= -n; ++i)
        {
            result /= x;
        }
    }
    return result;
}
// power.c