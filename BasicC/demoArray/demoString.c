#include <stdio.h>


/* 它也是个常量 */
const int g_num = 10;

int main ()
{
    /* 字符数组初始化定义的两种方式 */
   char buffer1[] = "helloworld";
   buffer1[0] = 'H';
   printf("buffer1:%s,\tbuffer1[0]:%c\n", buffer1, buffer1[0]);

   char * ptr = "helloworld";
   buffer1[0] = 'H';
   printf("ptr[0]:%c\n, ptr[1]:%c\n", *(ptr + 0), *(ptr + 1));
   /* 为什么字符串改不了？ 因为字符串是常量，它也是存放在全局区的 */
   ptr[0] = 'H';
   printf("ptr[0]:%c\n", ptr[0]);



   return 0;

}