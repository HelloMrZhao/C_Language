#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//函数递归2：
//2.编写函数不允许创建临时变量，求字符串的长度。
#include <string.h>
//int my_strlen(char* str)
//{
////	//普通做法：
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////
////	}
////	return count;
//	//递归做法：（大事化小）：
//	//my_strlen("bit");
//	//1 + my_strlen;
//	//1 + 1 + my_strlem("it");
//	//1 + 1 + 1 + my_strlem("t");
//	//1 + 1 + 1 + my_strlem(" ");
//	//1+1+1+0 = 3;
//
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1); //递归
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//['b'] ['i'] ['t'] ['\n']
//	//
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//递归与迭代：
//求n的阶乘不考虑溢出：
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//
//	}
//	else	
//	return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	//int ret = 1;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	//常规做法：
//	//for (i = 1; i <= n; i++) //循环是一种迭代
//	//{
//	//	ret = ret * i;
//	//}
//	printf("%d\n", ret);
//	return 0;
//} 
//有一些功能可以使用迭代的方法写也可以使用递归

//求第n个斐波那契数。（不考虑一处）
//1 1 2 3 5 8 13 21 55
//斐波那契数就是前两个数之和等于第三个
//int count = 0;
////递归可以求解，但是效率太低。
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}


//1 1 2  3  5  8 13 21  34 55 ....
//a b c  
//c = a + b;


int  Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{ 
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

//研究汉诺塔问题
//广联达- 北京和西安 
//国内建筑领域内软件龙头企业

//研究青蛙跳台阶问题 - 斐波那契数问题
