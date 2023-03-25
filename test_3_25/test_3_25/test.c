#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//a ? b : c是什么意思
//这个是条件表达式,表示如果a为真,则表达式值为b,如果a为假,则表达式值为c
//https://www.nowcoder.com/ta/beginner-programmers牛客网刷题地址

//1.计算一个数的每位之和（递归实现）：
//写一个函数叫DigitSum(n),输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729),则应该返回1+7+2+9，它的和是19
//输入：1729，输出：19

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}


//2.用递归来实现n的k次方
double Pow(int n, int k)
{
	int i = 0;
	if (k > 0)
	{
		return n * Pow(n,k - 1);
	}
	else if(k == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / (Pow(n, -k));
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}