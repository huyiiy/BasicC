#include <stdio.h>


#define BUFFER_SIZE 10

int main()
{
#if 0
    int array[BUFFER_SIZE] = { 0 };

    /* 数组的越界访问 */
    /* 判断索引的有效性 ： 索引必须是合理的范围RANGE [0 - BUFFER_SIZE-1] */
    printf("array[-1]:%d\n",  array[-1]);
    printf("array[10]:%d\n",  array[10]);
#endif

#if 1
   /* 静态数组 */
   int array[BUFFER_SIZE] = { 0 };
   printf("array[-1]:%d\n",array[-1]);
   printf("array[1o]:%d\n",array[10]);
   /* 动态数组 */
   /* 算法 ：
        自动扩容
        自动缩容
   */

#endif

#if 1
   /* 字符数组 <---> 字符串 */

#endif
    return 0;
}