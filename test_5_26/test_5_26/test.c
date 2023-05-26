#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//1 2 3
//4 5 6
//7 8 9 

//void find_k(int arr[3][3], int k, int r, int c)
//{
//	int x = 0;
//	int y = c - 1;
//	int flag = 0;
//	
//	while (x<r && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//
//		if (arr[x][y] == k)
//		{
//			flag = 1;
//			printf("找到了，下标是%d %d\n", x, y);
//			break;
//		}
//		
//	}
//	if (flag == 0)
//		printf("没找到\n");
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	find_k(arr, k, 3, 3);
//	return 0;
//}


//方法二

//void find_k(int arr[3][3], int k, int*px, int*py)
//{
//	int x = 0;
//	int y = *px - 1;
//	int flag = 0;
//
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	//找不到
//	*px = -1;
//	*py = -1;
//}
//
////代码设计要高内聚低耦合
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	find_k(arr, k, &x, &y);
//	if (x == -1 && y == -1)
//	{
//		printf("没找到\n");
//	}
//	else {
//		printf("找到了，下标是%d %d\n", x, y);
//	}
//	return 0;
//}


//有序序列的合并
//输入两个升序排列的数列并将两个排列为一个有序序列并输出

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr1[1000];
//	int arr2[1000];
//	//接收第一个序列
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	//接收第2个序列
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//
//	//有序合并打印
//	i = 0;//遍历序列1
//	j = 0;//遍历序列2
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ",arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	if (i == n)
//	{
//		for (; j < m; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	else
//	{
//		for (; i < n; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}


//空心三角形
//*
//**
//* *
//*  *
//*   *
//******
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)//scanf函数读到一个有效的整型后会返回1,多组输入的写法
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				if (j == 0 || i == n - 1 || i == j)
//					printf("* ");
//				else
//					printf("  ");
//			}  
//			printf("\n");
//		}
//	}
//	return 0;
//}


//X型图像
//*        *
//  *    *
//	   *
//   *   *
//  *      *


//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if(i == j || i+j == n-1)
//				printf("*");
//				else
//					printf("  ");
//	
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//有一个整数序列(可能有重复的整数)，现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//数据范围 : 序列长度和序列中的值都满足1≤n ≤50

int main()
{
	int arr[50] = { 0 };

	int n = 0;
	int del = 0;
	scanf("%dd", &n);
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//接受收要删除的元素
	scanf("%d", &del);
	//删除
	i = 0;//遍历数组
	j = 0;//记录可以存数据的当前位置
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}
	return 0;
}