#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//指针的进阶
//1.字符指针
//2.数组指针
//3.指针数组
//4.数组传参和指针传参
//5.函数指针
//6.函数指针数组
//7.指向函数指针数组的指针
//8.回调函数
//9.指针和数组面试题的解析

//1. 指针就是个变量，用来存放地址，地址唯一标识一块内存空间。
//2. 指针的大小是固定的4 / 8个字节（32位平台 / 64位平台）。
//3. 指针是有类型，指针的类型决定了指针的 + -整数的步长，指针解引用操作的时候的权限。
//4. 指针的运算。

//1.字符指针
//在指针的类型中我们知道有一种指针类型为字符指针char*;

//int main()
//{ 
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch); //a
//	return 0; 
//}

//int main()
//{
//	const char* p = "abcdef"; //"abcdef"是常量字符串,不能被改
//	//*p = 'w';//err
//	//p是指针变量，在x86的环境下是4个字节
//	printf("%c\n", *p);
//	printf("%s\n", p); 
//	return 0;
//}   

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//    char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 != p2\n");
//	}
//
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//	return 0;
//}

//2.指针数组
//指针数组是一个存放指针的数组

//整型数组
//int arr[10];//存放整型的数组

//字符数组
//char arr2[5]; //存放字符的数组

//int main()
//{
//	//int* arr[10]; //每个元素都是指针，存放整型指针的数组
//	//char* ch[5];//存放字符指针的数组
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//
//	int* arr[3] = { &a, &b, &c };//arr就是一个指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 2,3,4,5,6 };
	int arr3[5] = { 3,4,5,6,7 };
	 
	int* parr[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{                      
			printf("%d ", *(parr[i] + j));
			//printf("%d ", (parr[i][j]));
		}
		printf("\n");
	}
	return 0;
}