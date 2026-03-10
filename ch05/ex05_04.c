/**
 * ex05_04.c - 计算前 100 个素数
 *
 * 一个合数一定可以分解为几个素数的乘积，也就是说，一个数如果能被一个素数整除就一定是合数。
**/
#include <stdio.h>

int main(void)
{
    constexpr size_t size = 100;    // 素数表的长度
    long primes[size] = {[0]=2};    // 素数表
    size_t count = 1;               // 当前素数表中元素的个数
    long trial = 3L;                // 候选的素数

    while (count < size) {
        // 假设候选素数是素数
        bool is_prime = true;
        for (size_t i = 0; i < count && is_prime; ++i) {
            is_prime = trial % *(primes + i) != 0;  // 所有的素数都不是候选素数的因数
        }
        if (is_prime) {
            *(primes + count) = trial;
            ++count;
        }
        trial += 2; // 下一个候选素数
    }
    // 输出一个表格
    printf("The first %lu primes are: \n", size);
    for (size_t i = 0; i < size; ++i) {
        printf("%7ld", *(primes + i));
        if ((i + 1) % 10 == 0) {
            putchar('\n');
        }
    }
    putchar('\n');
    return 0;
}
// ex05_04.c