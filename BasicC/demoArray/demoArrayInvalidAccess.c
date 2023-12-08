#include <stdio.h>

#define BUFFER_SIZE 10

int main()
{   
#if 0   //静态数组
    int array[BUFFER_SIZE]={ 0 };
    printf("array[-1]:%d\n",array[-1]);
    printf("array[10]:%d\n",array[10]);
#endif 

#if 0
int array[BUFFER_SIZE]={ 0 };
    //动态数组
    //算法：自动扩容
#endif
#if 1



#endif
    return 0;

}