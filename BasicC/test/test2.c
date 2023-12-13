#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ELEMENT_SIZE 10
#define RANDOM_NUM 20


int  main()
{
    int nums[ELEMENT_SIZE];
    memset(nums, 0 , sizeof(int )*ELEMENT_SIZE);
    srand(time(NULL));


    for(int idx = 0; idx < ELEMENT_SIZE ; idx++ )
    {
        nums[idx] = rand() %RANDOM_NUM + 1;
        printf("idx:%d,nums[idx]:%d\n", idx, nums[idx]);
    }

    int num11 = 0;
    for(int num1 = 0; num1 < ELEMENT_SIZE ; num1++ )
    {
         for(int num2 = num1 + 1; num2 < ELEMENT_SIZE ; num2++ )
        {   
            num11++;
            if( nums[num1] < nums[num2] )
            {
                
                int temp = nums[num1];
                nums[num1] = nums[num2] ;
                nums[num2] = temp;    
            }
        }
    }
    printf("num11 = %d\n",num11);


    for(int num1 = 0; num1 < ELEMENT_SIZE ; num1++ )
    {
        printf("num1:%d, nums[num1]:%d\n",num1, nums[num1]);
    }
    

    /*删除重复*/
    int pos = 0 ;
    int num22 = 0;
    int newnums[pos] ;
    memset(newnums, 0 , sizeof(int )*pos);
    
    for(int idx2 = 0; idx2 < ELEMENT_SIZE ; idx2++ )
    {
        if(nums[idx2] != nums[idx2 -1])
        {
            pos++;
            newnums[pos] = nums[idx2];
            printf("newnums[pos]:%d\n" ,newnums[pos]);
        }
    } 
    

    return  0 ;
}




