#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.二级指针

//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa是指针变量（一级指针），*告诉我们pa是指针变量
//	int** ppa = &pa;//ppa是一个二级指针，*告诉我们ppa是指针，int*告诉我们ppa指向的对象是int*的    
//	int*** pppa = &ppa;//pppa就是三级指针
//	return 0;
//}


//2.指针数组 - 存放指针的数组
//整型数组
//int main()
//{
//	//int arr[5];//指针数组 - 存放整型的数组
//	//char ch[6];//字符数组 - 存放字符的数组
//
//	int a = 10;
//	int b = 11;
//	int c = 12;
//	int d = 13;
//	int e = 14;
//	int* arr2[5] = { &a,&b,&c,&d,&e };//指针数组
//	//存放指针或者存放地址的数组就叫指针数组，每个元素都是一个指针
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%p\n", arr2[i]);
//		printf("%d\n", *(arr2[i]));
//
//	}
//	return 0;
//}
 
int main()
{
	int data1[] = { 1,2,3,4,5 };
	int data2[] = { 2,3,4,5,6 };
	int data3[] = { 3,4,5,6,7 };

	//arr就是一个指针数组
	int* arr[3] = { data1, data2,data3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]); //方法一
			//方法一中为什么不在arr前加*进行解引用的原因是，arr中的[]就等价于是*解引用，[]其实就是在访问它里面的元素，所以不需要加*
			//printf("%d ", *(arr[i]+j));//方法二
		}
		printf("\n");
	}
	return 0;
}