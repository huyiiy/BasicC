#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*函数参数：可以没有 也可以有*/
/*函数返回值：可以没有 也可以有
    没有的情况需要写void
    如果有，返回你想返回的数据类型{int |long | short | char |float | double}

*/
/*什么叫API:Application Programming Interface*/

/*函数的定义*/
#if 1
// case1:没有参数，没有返回值
void purchaseAppointThing()
{
    printf("purchase a phone\n");
}
#endif

#if 1
// case2:有参数，没有返回值
/*函数参数一定有数据类型*/
void myAddNum1(int num1,int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n",sum);
    
}
#endif
#if 1
//case:有参数，有返回值
int myAddNum2(int num1,int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n",sum);
    return sum;
}
#endif
int main()
{
#if 0   
    /*函数的调用*/
    purchaseAppointThing();

    int num1 = 5;
    int num2 = 6;

    /*函数的使用*/
    myAddNum1(num1, num2);

    int totalsum = myAddNum2(num1,num2);

    int transFormerPrice = 10;
    if(totalsum > transFormerPrice)
    {
        printf("get a transFormer\n");
    }
    else
    {
        printf("I not got\n");
    }


#endif
#if 1
    int num1 = 50;
    int num2 = 60;
    int sum = CalculateAdd(num1, num2);
    printf("sum:%d\n", sum);
#endif
    return 0;
}