#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//函数的调用分为两种 
//传值调用:
// 函数的形参和实参分别占用不同的内存快，对形参的修改不会影响实参。
//传址调用：
//传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* pa, int* pb)//指针变量
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap1(a, b);//传值调用，这是传的两个变量，改变形参的值不会影响实参
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//传址调用，这是传的两个变量的地址
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//1.写一个函数判断一个数是不是素数
//(素数-质数，只能被1和它本身整除的数)
//方法一：排除所有的偶数
//#include <math.h>
//int Sushu(int x)
//{
//	if (x != 2 && x % 2 == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(x); j++)
//		{		
//			if (x % j == 0)
//			{
//				return 0;
//			}		
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d", &a);
//	int n = Sushu(a);
//	if (n == 1)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	return 0;
//}

//写一个函数来判断一年是不是闰年
//世纪年：能被400整除的年份是闰年
//普通年：能被4整除但不能被100整除的年份是闰年
//我的做法：
//int Year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0 )
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("请输入年份：\n");
//	scanf("%d", &a);
//	if (Year(a) == 1)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{ 
//		printf("不是闰年\n");
//	}
//	return 0;
//}

//老师的做法：
// 
//一个函数如果不写返回类型，默认返回int类型
//
//int is_leap_year(int x)
//{
//	return ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0));
//		/*{
//			return 1;
////		}*/
////else
////{
////	return 0; //一定要加上retuen 0,把两种返回结果写全面
////}
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n闰年的个数：%d\n", count);
//	return 0;
//}

//3.写一个函数，实现一个整型有序数组的二分查找
//我的方法：
//int search(int x)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//		if (left > right)
//		{
//			return -1;
//		}
//	}
//}
//int main()
//{
//	printf("输入要查找的数：\n");
//	int a = 0;
//	scanf("%d", &a);
//	if (search(a) != -1)
//	{
//		printf("找到了，下标就是：%d\n", search(a));
//
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//老师的方法：
int search(int x[], int y, int z)
{
	int left = 0;
	int right = z - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x[mid] < y)
		{
			left = mid + 1;
			mid = (left + right) / 2;//找到数组的平均值
		}
		else if (x[mid] > y)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
			break;
		}
		if (left > right)
		{
			return -1; //未了避免歧义所以返回-1而不是0
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("输入要查找的数：\n");
	int a = 0;//要查找的数字
	int sz = sizeof(arr) / sizeof(arr[0]);//总大小除以第一个元素的大小等于数组的元素个数
	scanf("%d", &a);
	int ret = search(arr, a, sz);
	if (ret != -1)
	{
		printf("找到了，下标就是：%d\n", ret);

	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}