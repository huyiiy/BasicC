#include <stdio.h>
#include <string.h>



#define BUFFER_SIZE 5

int main()
{
#if 0
    #if 0
    /* 
    数组：
        1.一块连续的存储空间
        2.数组是存储相同的数据类型·
        int array[BUFFER_SIZE];         /* 整数数组*/        
        char array[BUFFER_SIZE];        /* 字符数组*/
        char *array[BUFFER_SIZE];       /* 字符串数组*/
        /* todo... 结构体数组 */        
    #endif

    /* 字符数组的内存在栈区 */
    char name[BUFFER_SIZE] = {0};
    memset(name, 0, BUFFER_SIZE);
    //name = "zhangsan";
    strncpy(name, "zhangsan", sizeof(name) - 1);
    printf("name:%s\n", name);

    printf("name[1]:%c\n", name[1]);
    name[1] = 'H';  /*可以修改*/
    printf("name:%s\n", name);

    /* 指针和数组不分家 */
    printf("*(name + 2):%c\n", *(name + 2));
    *(name + 2)='A'; /*也可以改的*/
    printf("name:%s\n", name);

    /*conclusion:
        1.指针和数组是不分家的。
            name[X] = *(name + X). X就是常量
    */


#endif



#if 0
    /* 字符串 : 内存在全局（常量）区 */
    char *ptr = "zhangsan";

    /* 数组和指针是不分家的 */
    printf("ptr[1]:%c\n", ptr[1]);
    //ptr[1] = *(ptr + 1);
    printf("*(ptr + 2):%c\n", *(ptr + 2));

    ptr[0] = 'Z';
    printf("ptr[1]:%c", ptr[0]);

    /* comclusion:
        字符数组和字符串的区别：
        1.内存：字符数组内存存放在栈区，存储的值可以被修改
                字符串内存存放在全局区，不可以被修改。
    */
#endif

#if 1
    /* 字符串数组 */
    char *array[BUFFER_SIZE] = {0};
    memset(array, 0, sizeof(array));
    array[0] = "hello";
    array[1] = "world";
    array[2] = "nihao";
    array[3] = "zhangsan";
    array[4] = "china";

    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %s\n", idx, array[idx]);
    }

    /* 字符串数组：
        1.它是一个数组
        2.存放的是字符串
    */
    printf("array[0][0] %c",array[0][0]);
#endif


    return 0;
}