/**
 * test.c - 
 * 
**/
#include <stdio.h>

int main(void)
{
    int array[10] = {};  // c23
    int (*parray)[10] = &array;  // parray 表示一个指针，指向元素类型为 int 长度为 10 的数组 
    
    for (int i = 0; i < 10; ++i)
    {
        // 使用指向数组的指针修改数组中的元素
        (*parray)[i] = i + 1;
    }

    for (int i = 0; i < 10; ++i)
    {
        // 使用 array 数组名访问元素
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
// test.c