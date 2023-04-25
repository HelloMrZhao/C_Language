#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////逆序字符串
//#include <string.h>
//int main()
//{
//	char arr[10000] = { 0 };
//	//gets(arr);
//	//scanf("%[^\n]", arr);
//	fgets(arr, 10000, stdin);
//	int len = (int)strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}


//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2+22+222+2222+22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + 2;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//求出0~100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其个位数字的n次方之和确恰好等于该数本身，如：153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3,则153是一个"水仙花数".
//
//#include <string.h>
//#include <math.h>
//int main()
//{
//	//判断i是否是自幂数
//	//1.计算i的位数 - n
//
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp) //1234
//		{
//			sum += (int)pow(tmp % 10, n); //计算一个数的n次幂	
//			tmp /= 10;
//		}
//
//		//3.比较
//		if (sum == i)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}


//自测:
//#include <math.h>
//int main()
//{
//	//1.判断一个数的位数
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int tmp = i;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//
//		//2.计算每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//
//		//3.判断
//		if (sum == i)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}


//用C语言打印出菱形

//int main()
//{
//	//打印上半部分
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	
//	}
//
//	//打印下半部分
//	for (i = 0; i < n-1; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*(n-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
 

//自测：
int main()
{
	//打印上半部分
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		//打印行
		//打印空格
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}

		//打印*
		for (j = 0; j < 2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//打印下半部分
	for (i = 0; i < n-1; i ++)
	{
		//打印行
		//打印空格
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}

		//打印*
		for (j = 0; j < 2 * (n-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}