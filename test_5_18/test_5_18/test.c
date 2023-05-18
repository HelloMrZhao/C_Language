#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//%llu --longlong unsingal,sizeof在64位平台需要用%llu
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%llu\n", sizeof(arr));//6
//	printf("%llu\n", sizeof(arr + 0)); //4/8  arr+0是数组首元素的地址
//	printf("%llu\n", sizeof(*arr)); //1- *arr是数组首元素，首元素是一个字符，大小是一个字节
//	printf("%llu\n", sizeof(arr[1])); //1- arr[1]是数组的第二个元素，首元素是一个字符，大小是一个字节
//	printf("%llu\n", sizeof(&arr)); //4/8 - &arr是数组的地址，是地址就是4/8
//	printf("%llu\n", sizeof(&arr + 1)); //4/8 - &arr+1-是从数组的地址开始向后跳过了整个数组产生的一个地址，是地址它的大小就是4/8个字节
//	printf("%llu\n", sizeof(&arr[0] + 1));//&arr[0]取出数组的第一个元素，加1就是第二个元素的地址，是地址大小就是4/8个字节
//	
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%llu\n", strlen(arr));//随机值，因为strlen需要找\0,f后面哪个位置遇到\0是未知的
//	printf("%llu\n", strlen(arr + 0));//随机值，arr+0还是数组首元素的地址
//	printf("%llu\n", strlen(*arr));//err-这是一个错误示范， arr是数组首元素的地址，*arr是数组的首元素，'a'acll码值是97，当把97给到strlen时，strlen就从97开始向后寻找\0,这会出现野指针的现象
//	printf("%llu\n", strlen(arr[1]));//err - 'b'- 98
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//随机值 - a的地址加1到b的地址，strlen从b的地址向后数
//	return 0;
//}
//sizeof是一个操作符
////注意sizeof不是函数，是操作符，操作符没办法模拟出来
//sizeof 计算的是对象所占内存的大小-单位是字节，返回值的类型是size_t
//不在乎内存中存放的是什么，只在乎内存大小

//strlen是一个库函数
//求字符串长度，从给定的地址向后访问字符，统计\0之前出现的字符个数

int main()
{
	char arr[] = "abcdef";//字符串初始化数组
	//[a b c d e f \0]
	//printf("%d\n", sizeof(arr));//7,sizeof内部单独放一个数组名计算的是整个数组所占空间内存的大小，单位是字节
	//printf("%d\n", sizeof(arr + 0));//4/8 - 是数组首元素的地址，就是a的地址，是地址就是，大小就是4/8个字节
	//printf("%d\n", sizeof(*arr));//*arr是数组的首元素，首元素的大小就是a的大小，a的大小就是1 
	//printf("%d\n", sizeof(arr[1]));//arr[1]是数组的第二个元素，元素b的大小就是1
	//printf("%d\n", sizeof(&arr));//4/8 - &arr是数组的地址，但是数组的地址依然是地址，是地址大小就是4/8个字节
	//printf("%d\n", sizeof(&arr + 1));//数组的地址加1，表示的就是跳过一个数组，是\0后面的这个地址 
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - 是数组第二个元素的地址，是地址，大小就是4/8个字节


	//strlen统计的是\0出现之前字符的个数
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6 
	printf("%d\n", strlen(&arr + 1));//从\0后开始，所以是随机值
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}
