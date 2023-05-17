#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//9.指针和数组笔试题解析

//数组名是首元素的地址
//但是有两个例外：
//1.sizeof(数组名），这里的数组名表示整个数组，计算的是整个组的大小
//2.&数组名，这里的数组名表示整个数组，取出的是整个个数组的地址
//int main()
//{
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a)); //16
//	//printf("%d\n", sizeof(a + 0));//4/8 a+0是数组的第一个元素的地址，是地址，大小就是4/8个字节
//	//printf("%d\n", sizeof(*a));//4，a表示数组首元素的地址，*a表示数组的第一个元素，sizeof(*a)就是第一个元素的大小是4个字节
//	//printf("%d\n", sizeof(a + 1));//4，a+1表示数组第二个元素的地址，sizeof(a+1)就是第二个元素大小是4个字节
//	//printf("%d\n", sizeof(a[1])); //4 计算的是第二个元素的大小
//	//printf("%d\n", sizeof(&a));  //4/8 &a取出的是整个数组的地址，数组的地址也是地址呀，是地址大小就是4/8字节  
//	//printf("%d\n", sizeof(*&a));//16  计算的是整个数组的大小
//	//printf("%d\n", sizeof(&a + 1));//4/8 //&a是数组的地址，+1跳过整个数组，产生的是4后边位置的地址
//	//printf("%d\n", sizeof(&a[0]));//4/8 取出的是数组第一个元素的地址
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8 指向第二个元素的地址
//
//
//	char arr[] = { 'a','b','c','d','e','f' };//a,b,c,d,e,f
//
//	return 0;
//}
////szieof 计算的是对象所占内存的大小-单位是字节



int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6,sizeof不会遇到\n就停下
	printf("%d\n", sizeof(arr + 0)); //4/8 arr+0是数组首元素地址
	printf("%d\n", sizeof(*arr)); //1 - *arr是首元素，首元素是一个字符，大小一个字节
	printf("%d\n", sizeof(arr[1]));//1 - arr[1]是数组的第二个元素，大小也是一个字节
	printf("%d\n", sizeof(&arr));//&arr是数组的地址，是地址就是4/8个字节
	printf("%d\n", sizeof(&arr + 1));//&arr + 1是从数组的地址开始向后跳过了整个数组产生的一个地址 
	printf("%d\n", sizeof(&arr[0] + 1));//4 / 8 arr[0] + 1是数组的第二个元素的地址
	return 0;
}
