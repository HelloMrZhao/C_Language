#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
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
//			printf("�ҵ��ˣ��±���%d %d\n", x, y);
//			break;
//		}
//		
//	}
//	if (flag == 0)
//		printf("û�ҵ�\n");
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	find_k(arr, k, 3, 3);
//	return 0;
//}


//������

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
//	//�Ҳ���
//	*px = -1;
//	*py = -1;
//}
//
////�������Ҫ���ھ۵����
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	find_k(arr, k, &x, &y);
//	if (x == -1 && y == -1)
//	{
//		printf("û�ҵ�\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±���%d %d\n", x, y);
//	}
//	return 0;
//}


//�������еĺϲ�
//���������������е����в�����������Ϊһ���������в����

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr1[1000];
//	int arr2[1000];
//	//���յ�һ������
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	//���յ�2������
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//
//	//����ϲ���ӡ
//	i = 0;//��������1
//	j = 0;//��������2
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


//����������
//*
//**
//* *
//*  *
//*   *
//******
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)//scanf��������һ����Ч�����ͺ�᷵��1,���������д��
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


//X��ͼ��
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

//��һ����������(�������ظ�������)����ɾ��ָ����ĳһ�����������ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
//���ݷ�Χ : ���г��Ⱥ������е�ֵ������1��n ��50

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
	//������Ҫɾ����Ԫ��
	scanf("%d", &del);
	//ɾ��
	i = 0;//��������
	j = 0;//��¼���Դ����ݵĵ�ǰλ��
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}
	return 0;
}