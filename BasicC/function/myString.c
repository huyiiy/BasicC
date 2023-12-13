#include "myString.h"
#include <stdio.h>


int myStrlen( const char *pStr)
{
    int count = 0;

#if 0
    if(pStr == NULL)
    {
        return count;
    }
#else
    if (!pStr)
    {
        return count;
    }
#endif
    while ( pStr[count] != '\0')
    {
       count++ ;
       pStr++ ;
    }
    return count;
}
#if 0
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
int myStrcat(char *dest, const char *str)
{
	char* ret = dest;
	assert(*dest != NULL);
	assert(*str);
	//找到目的字符串里的'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//追加
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
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
#endif 