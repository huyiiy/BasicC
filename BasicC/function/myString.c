#include "myString.h"


int myStrlen( const char *str)
{
    int idx = 0;
    while ( str[idx] != '\0')
    {
       idx++ ;
    }
    return idx;
}
int myStrcpy(char *dest, const char *src)
{
    size_t idx = 0;
    while ( src[idx] != '\0')
    {
       dest[idx] = src[idx];
       idx++ ;
    }

    dest[idx] = '0';
    return idx;
}
/**/
int myStrcmp(const char *s1, const char *s2)
{
    int idx = 0;
    int len = 0;
    if(str(s1)>str(s2))
    {
        len = str(s2);
    }
    else
    {
        len = str(s1);
    }
    for(idx = 0 ; idx <len ; idx++)
    {
        if(s1[idx]==s2[idx])
        {
            continue;
        }
        else
        {
            break;
        }

        if((idx==len)&&(str(s1)==str(s2)))
        {
            return 0;

        }
        else if(s1[idx]>s2[idx])
        {
            return 0;

        }
        else
        {
            return -1;
        }
    }

}
/**/
int myStrcat(char *dest, const char *src)
{
    const size_t num ;
    int len = str(src);
    if (len > num) len = num;
    else if (len < num) len = str(src);

}
 




int main()
{
    int myStrlen(const char *str);

    char str[] = "hello";
    char *ptr = &str[0];
    int len = myStrlen(ptr);
    printf("len:%d\n",len);
    return 0;
}
    