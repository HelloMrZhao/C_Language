#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//写一个函数，没调用一次这个函数，就会将num的值增加1
//void Add(int* p)
//{
//	(*p)++; //一定记得要带括号
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//函数的嵌套调用和链式访问
//函数不能嵌套定义，但是可以嵌套调用，例：
//void test3()
//{
//	printf("hehe\n");
//}
//void test2()
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//  }

//链式访问就是把一个函数的返回值作为另外一个函数的参数
//#include <string.h>
//int main()
//{
	//int len = strlen("abc");
	//printf("%d\n", len);

	////链式访问
	//printf("%d\n", strlen("abc"));

	//char arr1[20] = { 0 };
	//char arr2[] = "bit";
	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);//普通做法
	//printf("%s\n",strcpy(arr1,arr2));//strcpy()函数的返回值做了printf()函数的参数,这就是链式访问

	//printf()函数返回的是打印在屏幕字符的个数
//	printf("%d", printf("%d", printf("%d", 43)));//printf()函数的返回值做了printf()函数的参数,这就是链式访问
//	return 0;
//}

//函数的声明和定义：

// 函数的声明：
//1.告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在无关紧要。
//2.函数的声明一般出现在函数的使用之前。要满足先声明后使用。
//3.函数的声明一般要放在头文件中

//函数的定义：
//函数的定义是指函数的具体实现，交待函数的功能实现。

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下;就是在告知有这么一个函数
//	int Add(int, int);
//
//	printf("%d\n", Add(a, b));
//	return 0;
//}
//
////函数的定义；就是在创建一个函数
//int Add(int x, int y)
//{
//	return x + y;
//}
#include "add.h"
#include "sub.h"

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	int d = Sub(a, b);
	printf("%d\n", d);
	printf("%d\n", c);
	return 0;
}