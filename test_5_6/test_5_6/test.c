#define _CRT_SECURE_NO_WARNINGS 1

//指针数组
//数组-存放的是指针
//char*arr[5]:

//数组指针
//是指针，是指向数组的指针

//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;
//
//
//	return 0;
//}


////int arr[5];
////arr是一个整型数组，每个元素是int类型的，有5个元素
//
//int* parr1[10];
////parr1是一个数组，数组10个元素，每个元素的类型int*
//    
//
//int(*parr2)[10];
////parr2是一个指向数组的指针指向的数组有十个元素，每个元素的类型是int
//
//int(*parr3[10])[5];
////parr3是一个数组，数组有10个元素，每个元素的类型是：int(*)[5]
////parr3是存放数组 指针的数组  


//4.数组参数、指针参数
//在写代码的时候难免要把【数组】或者【指针】传给函数，那函数的参数该如何设计？

//4.1一维数组传参
 

//int arr[5];
////arr是一个整型数组，每个元素是int类型的，有5个元素
//
//int* parr1[10];
////parr1是一个数组，数组10个元素，每个元素的类型int*
//    
//
//int(*parr2)[10];
////parr2是一个指向数组的指针，指向的数组有十个元素，每个元素的类型是int
//
//int(*parr3[10])[5];
////parr3是一个数组，数组有10个元素，每个元素的类型是：int(*)[5]
////parr3是存放数组 指针的数组  


////注意：数组名在传参的时候传的是数组首元素的地址
////形参写成数组的形式：
//void test(int arr[10]) 
//{
//
//}
//
//void test(int arr[])//形参部分的数组大小可以省略
//{
//
//}
//
//void test(int arr[100])//不建议，但是没错
//{
//
//}
//
////形参写成指针的形式：
//void test(int*p)
//{
//
//}
////以上形式都可以传参
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}


//数组指针的传参：
//void test2(int* arr[20])
//{
//
//}
//
//void test2(int* arr[])
//{
//
//}
//
//void test2(int** p)
//{
//
//}
////以上写法都是可以的
//int main()
//{
//	int* arr2[10] = { 0 };
//	test2(arr2);
//	return 0;
//}


//void test(int arr[3][5])
//{
//
//}
//
//void test(int arr[][5])//行可以省略，但是列不能省略
//{
//
//}
//
//void test(int(*p)[5])  //形参写成指针的形式，5表示指向的数组是5个元素，P+1可以跳过一行，来到第二行的首元素地址
//{
//
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}


//二级指针传参
void test(char** ppc)
{

}
int main()
{
	char a = 'w';
	char* pa = &a;
	char** ppa = &pa;//ppa就是一个二级指针

	char* arr[4];//指针数组，每个元素是char*类型
	test(arr);
	test(ppa);
	return 0;
}