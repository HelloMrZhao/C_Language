#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//二级指针是用来存放一级变量地址的
//3.2数组名
//数组名改怎么理解呢？
//通常情况下，数组名都是数组首元素的地址，但是有两个列外：
//1.sizeof(数组名)，这里的数组表示整个数组，sizeof(数组名)计算的是整个数组
//2.&（取地址数组名),这里的数组名表示整个数组，&数组名，取出的是整个数组的地址
 

//数组指针到底有什么用？
//

//形参写数组
//void print1(int arr[], int sz) //形参int arr[]是数组的形式
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}


//传数组首元素的地址：
//形参写成指针的形式
//void print1(int*arr, int sz) //将形参写成指针的形式
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *arr++);
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//写一个函数打印arr数组的内容
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print1(arr, sz); //实参arr是数组，数组名是首元素的地址
//	return 0;
//}


//传数组的地址：
//void print1(int(*p)[10], int sz) //将形参写成指针的形式
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", (*p)[i]);
//
//		printf("%d ", *(*p + i));
//		//*p相当于数组名，数组名又是首元素的地址，所以*p就是&arr[0]
//	}
//} 
//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//写一个函数打印arr数组的内容
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print1(&arr, sz); //实参arr是数组，数组名是首元素的地址
//	return 0;
//}


//void print2(int(*p)[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",(*p)[i][j]);
//		}
//		printf("\n");
//	}
//} 
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//写一个函数，打印arr数组
//	print2(&arr, 3, 5);
//	return 0;
//}

void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d ", i + *(*p + j));
			//printf("%d ", (*p)[j] + i);

			//p + i是指向第i行的
			//*(p+i)相当于拿到了第i行，也相当于第i行的数组名
			//数组名表示首元素的地址，*(p+i)就是第i行第一个元素地址  
			printf("%d ", *(*(p+i) + j));
			//printf("%d ", p[i][j]);
			
			//等价写法：
			//arr[i];
			//*(arr + i);
			//
			//[i][j];
			//arr + i)[j]
			//(arr + i) + j);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//写一个函数，打印arr数组
	print2(arr, 3, 5);
	return 0;
}