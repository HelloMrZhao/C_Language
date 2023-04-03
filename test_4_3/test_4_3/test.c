#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.计算一个无符号整数的每位之和（递归实现）
//1729---19
//思路：
// DigitSum（1729）
// DigitSum（172）+9
// DigitSum（17）+2
// DigitSum（1）+7

//int DigitSum(int x)
//{
//	int i = 0;
//	//int a = 0;
//	if (x > 9)
//	{
//		return (x % 10) + DigitSum(x / 10);
//
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//	unsigned int n = 0;//unsigned int表示无符号常数
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//2.实现n的k次方,使用递归实现
//非递归做法
//int Power(int x,int y)
//{
//	int i = 0; 
//	int z = 0;
//	z = x;
//	for (i = 1; i < y; i++)
//	{
//		x = z * x ;
//	}
//	return x;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = Power(n,k);
//	printf("%d\n", ret);
//	return 0;
//}

//递归做法
double Power(int n, int k)
{
	int i = 0;
	if (k > 0)
		return n * Power(n, k - 1);
	else if (k == 0)
		return 1;
	else
		return 1.0 / Power(n, -k);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Power(n, k);
	printf("%lf\n", ret);
	return 0;
}