#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define RANDOM_NUM 10


int  main()
{
    int size;
    int target = 2;
    printf("输入数组大小：");
    scanf("%d", &size);
#if 0
    /*栈上开辟空间*/
    //int *array = (int*)malloc(sizeof(int)*size);

#else
    int array[size];
#endif
    int pos = 0;
    srand(time(NULL));


    for(int idx = 0; idx < size ; idx++ )
    {
        array[idx] = rand() %RANDOM_NUM + 1;
        printf("array[idx]:%d\t", idx, array[idx]);
    }
    printf("\n");
    
    
    
    for(int idx = 0; idx < size ; idx++)
        {
            
            if(array[idx] != target)
            {
                /*原地 空间复杂度0(1)*/
                #if 1
                /*优化版本*/
                array[pos++] = array[idx]; 
                #else
                array[pos] = array[idx];
                pos++;
                #endif
                printf("array[]:%d\n", array[pos]);
                
            }         
        }
        printf("\n");

    #if 1
        /* 后置++ ：先判断后赋值 */
        if(pos++)
        /*前置++ ：先赋值后判断*/
    
    return 0;
}
