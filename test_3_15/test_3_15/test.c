#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.打印1000到2000年之间的闰年
//年份分为平年和闰年，平年2月28天，闰年2月29天
//年份又可分为普通年和世纪年
//普通年：能被4整除但不能被100整除的年是闰年
//世纪年：能被400整除的年是闰年
//
//int main()
//{
//	int y = 0;
//	int num = 0;
//	printf("1000到2000年之间的闰年如下：\n");
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 100 == 0 )
//		{
//			if (y % 400 == 0)
//			{
//				printf("%d  ", y);
//				num++;
//			}
//		}
//		else if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d  ", y);
//			num++;
//		}
//	}
//	printf("\n\n区间内的闰年个数：%d\n", num);
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int num = 0;
//	printf("1000到2000年之间的闰年如下：\n");
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		{
//			printf("%d  ", y);
//			num++;
//		}
//	}
//	printf("\n\n区间内的闰年个数：%d\n", num);
//	return 0;
//}

//写一个代码：打印100-200之间的素数
//什么是素数：
//素数-质数
////一个大于1的自然数，只能被1和它本身整除
//int main()
//{
//	int i = 0; 
//	int count = 0;
//	printf("100-200之间的素数:\n");
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试i,看能不能被整除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n\n区间内的素数个数：%d\n", count);
//	return 0;
//}

//方法二：
//int main()
//{
//	int i = 0;
//	int count = 0;
//	printf("100-200之间的素数:\n");
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试i,看能不能被整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);//素数
//			count++;
//		}
//	}
//	printf("\n\n区间内的素数个数：%d\n", count);
//	return 0;
//}

//优化方案1：(引用sqrt()函数,减少试除的次数）
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	//m = a*b
//	//a和b中一定至少有一个数字是 <= 开平方m的
//	//16 = 2*8 =4*4
//	 
//	printf("100-200之间的素数:\n");
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试i,看能不能被整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j <= sqrt(i); j++) //sqrt() - 是开平方函数- 头文件math.h
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);//素数
//			count++;
//		}
//	}
//	printf("\n\n区间内的素数个数：%d\n", count);
//	return 0;
//}

//优化方案2：（排除偶数，减少试除次数）
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;

	//m = a*b
	//a和b中一定至少有一个数字是 <= 开平方m的
	//16 = 2*8 =4*4

	printf("100-200之间的素数:\n");
	for (i = 101; i <= 200; i+=2) //排除偶数试除数据就会少一半
	{
		//判断i是否为素数
		//2->i-1之间的数字去试i,看能不能被整除
		int j = 0;
		int flag = 1;//假设i就是素数
		for (j = 2; j <= sqrt(i); j++) //sqrt() - 是开平方函数- 头文件math.h
		{
			if (i % j == 0)
			{
				flag = 0;//不是素数
				break;
			}
		}
			if (flag == 1)
			{
				printf("%d ", i);//素数
				count++;
			}
	}
	printf("\n\n区间内的素数个数：%d\n", count);	
	return 0;
}