#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数栈的创建和销毁
//函数栈帧
//ebp,esp 这2个寄存器中存放的是地址
//这2个地址是用来维护函数栈帧的。

//每一个函数调用，都要在栈区创建一个空间
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}  

//5.1实例一
//实现代码：求1！+ 2！+ 3！+ ....+ n!;不考虑溢出
//先写出n!

//int main()
//{
//	//计算n的阶乘
//	int n = 0;
//	//scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)//先打印出1~n
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//自测求1！+ 2！+ 3！+ ....+ n!;不考虑溢出
//int main()
//{
//	int n = 0;
//	//scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}

//化简求1！+ 2！+ 3！+ ....+ n!;不考虑溢出
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	int a = 0;
	scanf("%d", &a);//确定一个阶乘和的范围
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= a; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
}

//自测冒泡排序法
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//确定元素的个数
//	//确定需要冒泡排序几趟
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//观察每一趟内部的比较情况
//		//确定每一趟的比较对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])//升序排序
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		//printf("%d ", arr[i]);
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}