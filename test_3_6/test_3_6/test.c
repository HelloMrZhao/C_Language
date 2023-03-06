#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//写一个函数求两个整数的较大值
//MAX - 一般不建议把函数的名字写成全大写
//int Max(int a,int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d",&x,&y);
//	/*if (x > y)
//	{
//		printf("max=%d\n", x);
//	}
//	else
//	{
//		printf("max=%d\n", y);
//	}*/
//	int m = Max(x,y);
//	printf("max=%d\n", m);
//
//	return 0;
//}

//写一个函数求两个整数的乘积
//int Multiple(int x, int y)
//{
//	int z;
//	z = x * y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int j = Multiple(a, b);
//	printf("J=%d\n", j);
//	return 0;
//}

//编写输出结果为8，10，12，14，16的代码
//int Zcl(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a+b+c);
//}
//int main()
//{
//	int a = 2;
//	for (int i = 0; i < 5 ;i++)
//	{
//		printf("%d\n", Zcl(a));
//	}
//	return 0;
//}

//int main()
//{
//	printf("           **           \n");
//	printf("           **           \n");
//	printf("     ***************    \n");
//	printf("     ***************    \n");
//	printf("          *  *          \n");
//	printf("          *  *          \n");
//	return 0;
//}

//输入包括一个整数M（1<=M<=100,000)
//输出包括一行，如果M可以被5整除就输出YES，否则输出NO（结果大小写敏感）
//注：写代码一定要严谨。
int main()
{
	int M =0;
	scanf("%d", &M);

		if (M % 5 == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		return 0;
	}
