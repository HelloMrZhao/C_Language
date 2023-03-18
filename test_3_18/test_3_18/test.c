#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//自定义函数
//自定义函数和库函数一样，有函数名，返回值类型和函数参数。但是不一样的是这些都是我们自己来设计。这给程序员一个很大的空间。

//函数的组成

//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//写一个函数找出两个整数中的最大值

//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//
//	}
//	else if (x < y)
//	{
//		return y;
//	}
//	else
//	{
//		return x, y;
//	}
//
//	
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int m = 0;
//	printf("请输入两个整数：\n");
//	scanf("%d%d", &a, &b);
//	int m = Max(a , b);
//	printf("最大值为：%d\n",m);
//	return 0;
//}

//Swap1在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
//改变形参，不能改变实参
void Swap1(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

//写一个函数交换两个整型的内容:
//函数返回类型的地方 写出：void,表示这个函数不返回任何值，也不需要返回
void Swap(int*pa, int*pb) // 括号中也是形式参数简称形参
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;

	//return x, y;  //return 只能返回一个值
}
int main()
{

	int a = 0;
	int b = 0;
	printf("请输入两个整型：\n");
	scanf("%d%d", &a, &b);
	printf("你输入的两个数分别为a=%d, b=%d\n", a, b);
	//Swap(a, b);//括号中是实参，可以是常量、变量、表达式、函数等，都必须要有确定的值，，将这些值传给形参
	//int max = get_max(2+5,get_max(4,7));//实参也可以是函数
	Swap(&a , &b);
	printf("交换a,b两个整型得到：a=%d ,b=%d \n",a, b);
	return 0;
}

//int main()
//{
//	int a = 10;//4个字节的空间
//
//	int* pa = &a;//pa就是一个指针变量,pa里面存放的是a的地址
//	*pa = 20;//通过pa所存的地址要找到它所找的对象，*pa就是上面的a
//
//	printf("%d\n",a); //结果a=20;
//	return 0;
//}

//形式参数（形参）：
//形式参数是指函数名后括号中的变量，形参只在函数被调用的过程中才实列化（分配内存单元），
//，所以叫形式参数。形式参数当函数调用完之后就自动销毁了。因此形式参数只在函数中有效。