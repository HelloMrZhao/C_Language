#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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
////函数指针数组 
//int main()
//{
//	//指针数组
//	//字符指针数组
//	char* arr[5];
//	//整型指针数组
//	int* arr2[4];
//
//
//	//函数指针存放函数的地址：
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf3)(int, int) = Mul;
//	int (*pf4)(int, int) = Div;
//
//	//函数指针数组
//	int (*pf[4])(int, int) = { Add,Sub,Mul,Div };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pf[i](8, 2);
//		printf("%d\n", ret);
//	}
//	return 0;
//}



//函数指针数组的用法：
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


//实现一个计算器的普通做法：
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
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);	
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Add(x,y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break; 
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//		printf("ret = %d\n", ret);
//	} while (input);
//	return 0;
//}


//用函数指针数组实现一个计算器：
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("#########################\n");
	printf("#####  1.add  2.sub #####\n");
	printf("#####  3.mul  4.div #####\n");
	printf("#####  0.exit       #####\n");
	printf("#########################\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	//转移表
	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//加0是为了将Add的地址变为1，以后元素的地址均后移
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器\n");
		}
		else if (input >= 1 && input <= 4)
		{
			printf("请输入2个操作数:>");
			scanf("%d%d", &x, &y);
			ret = pfArr[input](x, y);
			printf("ret=%d\n", ret);
		}
		else
		{
			printf("选择错误\n");
		}		
	} while (input);
	return 0;
}