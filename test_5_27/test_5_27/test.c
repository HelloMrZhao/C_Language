#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//strlen
//size_t strlen ( const char * str );
//字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包
//含 '\0' )。
//参数指向的字符串必须要以 '\0' 结束。
//注意函数的返回值为size_t，是无符号的（ 易错 ）
//学会strlen函数的模拟实现
//注：
int main()
{
	const char* str1 = "abcdef";
	const char* str2 = "bbb";
	if (strlen(str2) - strlen(str1) > 0)
	{
		printf("str2>str1\n");
	}
	else
	{
		printf("srt1>str2\n");
	}
	return 0;
}