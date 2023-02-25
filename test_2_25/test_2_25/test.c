#define _CRT_SECURE_NO_WARNINGS 1

//变量的作用域和生命周期：
//作用域：
//局部变量的作用域：就是变量所在的局部范围，通俗说就是在局部范围的{}里
//全局变量的作用域：整个工程都可以使用，如果需要调用源文件中其它文件的全局变量只需要在此文件中用extern声明一下
#include <stdio.h>

//int g_val = 2021;  //全局变量
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("HelloMrMhao\n"); 
//	{
//		printf("2:%d\n", g_val);
//
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//	printf(":%d\n", g_val);
//
//	return 0;
//}


//声明一下变量
extern int g_val;

int main()
{
	printf("%d\n", g_val);
	return 0;
}


//生命周期：
//变量的生命周期：变量的创建和销毁之间的时间段
//
//局部变量的生命周期：（应为只能作用于局本部）进入局部范围生命开始出局部范围生命结束
//全局变量的生命周期：（应为可以作用于整个工程）就是mian函数的生命周期也就是程序的生命周期
//
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	return 0;
//}
//
