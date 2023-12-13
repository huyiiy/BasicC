#ifndef __MYSTRING_H_
#define __MYSTRING_H_

#include <stdio.h>

/* 头文件只做函数的声明 */
/*获取字符串的长度*/
int myStrlen( const char *pStr);

/*字符串的拷贝*/
int myStrcpy(char *dest, const char *src);
/**/
int myStrcmp(const char *s1, const char *s2);
/**/
int myStrcat(char *dest, const char *str);


#endif //__MYSTRING_H_