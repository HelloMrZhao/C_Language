#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d", i);
//
//	}
//	return 0;
//}




//int func(int a)
//{
//	int b;
//	switch (a)  //switch中的语句必须是整型
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 10;
//	default: b = 0;
//	}
//	return b;
//}
//int main()
//{
//	printf("%d", func(1));
//	return 0;
//}

//F11 - 逐语句
//F10 - 逐过程

//2.以下语句打印的结果是什么？
//结果是hellothird
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)//如果switch语句中case语句后没有break，则依次按顺序执行每条语句
//		{
//		case 0:
//			printf("frist");
//		case 1:
//			printf("second");
//		break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//写代码将三个整数按从大到小输出
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("请输入三个整数：\n");
//	scanf("%d%d%d",&a ,&b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("三个数从大到小的顺序如下：\n");
//	printf("%d %d %d\n",a,b,c);
//
//	return 0;
//}

//写一段代码打印1-100之间所有3的倍数
//方法一；
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//方法二：
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 33; i++)
//	{
//		printf("%d ", 3*i);
//	}
//	return 0;
//}

//方法三：
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}

//3.给定两个数求两个数的最大公约数
// 我的方法：
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0,b = 0;
//	int max = 0;
//	printf("请输入两个整数\n");
//	scanf("%d%d", &m, &n);//24  18
//	a = m;
//	b = n;
//	if (m < n)
//	{
//		if (n % m == 0)
//		{
//			printf("最大公约数为:%d\n", m);
//		}
//		else
//		{
//			
//			while (1)
//			{
//				  max = m--;
//				if (n % max == 0 && a % max == 0)
//				{
//					printf("最大公约数为:%d\n", max);
//					break;
//				}
//			}
//		}
//	}
//	else if (m > n)
//	{
//		if (m % n == 0)
//		{
//			printf("最大公约数为:%d\n", n);
//		}
//		else
//		{
//
//			while (1)
//			{
//				max = n--;
//				if (m % max == 0 && b % max == 0)
//				{
//					printf("最大公约数为:%d\n", max);
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}

//老师的方法：
//int main()
//{
//	int m = 0, n = 0;
//	int max = 0;
//	printf("请输入两个整数：\n");
//	scanf("%d%d", &m, &n);
//	if (m < n)
//	{
//		max = m;
//	}
//	else
//	{
//		max = n;
//	}
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数为：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//方法三：（辗转相除法）
//我的做法：
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	printf("请输入两个整数：\n"); 
//	scanf("%d%d", &m, &n);
//	while (1)
//	{
//		t = m % n;
//		if (t == 0)
//		{
//			printf("最大公约数为：%d\n", n);
//			break;
//		}
//		m = n;
//		n = t;
//	}
//	return 0;
//}

//老师的做法：
int main()
{
	int m = 0, n = 0;
	int t = 0;
	int a = 0, b = 0;
	printf("请输入两个整数：\n");
	scanf("%d%d", &m, &n);
	a = m;
	b = n;
	while (t = m % n)
	{
		m = n;
		n = t;
	}
	printf("最大公倍数为：%d\n", a * b / n);
	printf("最大公约数为：%d\n", n);
	//最小公倍数 = m*n/最大公约数；
	return 0;
}