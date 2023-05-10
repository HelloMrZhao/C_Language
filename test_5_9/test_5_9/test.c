#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
////void test()
////{
////	printf("hehe\n");
////}
////int main()
////{
////	printf("%p\n", test);
////	void(*pf)() = test;
////	(*pf)();
////	test();
////	pf();
////
////	return 0;
////}
//
////用函数指针数组实现一个计算器：
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("#########################\n");
//	printf("#####  1.add  2.sub #####\n");
//	printf("#####  3.mul  4.div #####\n");
//	printf("#####  0.exit       #####\n");
//	printf("#########################\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//转移表
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//加0是为了将Add的地址变为1，以后元素的地址均后移
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}
//





//7.指向函数指针数组的指针

int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7 };
	int (*p)[10] = &arr;//p是数组指针


	int (*pf)(int, int) = &Add;
	//函数指针


	//函数指针数组
	int (*pfarr[4])(int, int);
	int(*(*p3)[4])(int,int) = &pfarr;//p3是一个指向函数指针数组的指针
	//p3是存放的是pfarr的地址，并不代表p3就是pfarr,只有通过*p3解引用后才找到pfarr，此时的*p3才是pfarr.
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int ret = (*p3)[i](3,4);
		printf("%d\n", ret);
	}

	//
	return 0;
}



