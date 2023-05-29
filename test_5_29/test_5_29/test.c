#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//字符函数和字符串函数
int main()
{
	//'a';//c语言中单引号引起来的叫字符
	//char ch = 'a';//字符类型叫char ch
	//"abcdef";//双引号引起来的就叫做字符串，但是C语言没有字符串类型，但是C语言提供了一系列的可以操作字符串和字符函数的相关函数
	//char arr[10] = { 'a','b','c','d','e','f' };//6
	char arr[7] = { 'a','b','c','d','e','f' };//6,给了数组十个空间但是只有6个字符，所以6个字符都初始化，其余的空间默认为0，系统里0就表示\0

	int len = strlen(arr);//string length
	printf("%d\n", len);
	return 0;
}