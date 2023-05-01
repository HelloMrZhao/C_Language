#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////冒泡排序
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//计算需要几趟冒泡排序
//	//冒泡排序的趟数和元素个数有关
//	int flag = 1;//表示数列原本就是排好序的
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//计算一趟冒泡排序中有几对元素需要比较
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//降序
//			//进行比较
//			if (arr[j] < arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//C语言常见的错误分类是编译错误、链接错误、运行时错误
//char*const p 声明了一个指向char类型变量的指针p，p的值不可修改，但p指向的变量值可修改 
// int*p[10]中p是数组指针，int(*p)[10],中的p是指针数组
//const int*p与int const*p等价

   
//阅读代码
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	//200:
//	//00000000 0000000 00000000 11001000
//	//a:11001000
//	//100:
//	//00000000 0000000 00000000 01100100
//	//b:01100100
//	//a+b:00101100
//	printf("%d %d", a + b, c); //300 44
//	return 0;
//}

//大小端字节序指的是数据在电脑上存储的字节顺序
//大端存储是吧地位字节放在高地址处，高位字节放在低地址处，小端相反


