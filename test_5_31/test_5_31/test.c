#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//长度受限制的字符串函数
//strncpy   
//strncat
//strncmp
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "quertyuiop";
//
//	strncpy(arr1, arr2, 6);//拷贝num个字符从源字符串到目标空间
//	//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个
//	printf("%s\n", arr1);
//	return 0;
//}




//int main()
//{
//	char arr1[20] = "abcdef\0xxxxxx";
//	char arr2[] = "qwertyuiop";
//	strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//
//	return 0;
//}



int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "qwertyuiop";
	int ret = strncmp(arr1, arr2, 4);
	printf("%d\n", ret);
	return 0;
}