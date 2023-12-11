#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>

#define ELEMENT_SIZE 20
#define RANDOM_NUM 20

int main()
{   

   
    int array[ELEMENT_SIZE] ;
    memset(array, 0 , sizeof(int )*ELEMENT_SIZE);
    array[ELEMENT_SIZE] = rand()%RANDOM_NUM +1 ;
    int  target  = 0;
    printf("target：");
    scanf( "%d" ,   &target);
    srand(time(NULL));
  
    for(int idx1 = 0;idx1< ELEMENT_SIZE; idx1++)
    {
        for(int idx2 = idx1 + 1;idx2 < ELEMENT_SIZE ; idx2++)
        {
            while(array[idx1] + array[idx2] != target)
            {
            array[ELEMENT_SIZE] = rand()%RANDOM_NUM +1 ;
            target = array[idx1] + array[idx2];
            printf("idx1:%d, idx2:%d, array[idx1]:%d\n ,array[idx2]:%d\n", idx1, idx2, array[idx1], array[idx2]);
            break;
            }
       
    
        
        }    
      
    }
   
    return 0;
}