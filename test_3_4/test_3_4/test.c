#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//#define 定义常量和宏：
//difine 是预处理指令
//1.difine定义符号,定义常量：

//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define 定义宏:
//#define ADD(x,y)  x+y
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));//结果4*2+3=11
//	return 0;
//}

//#define ADD(x,y)  ((x)+(y))
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));//结果4*(2+3)=20
//	return 0;
//}

//指针：指针 就是 地址
//先讲内存：一个内存单元多大，以及一个内存单元如何编号的，一个内存单元就是一个字节
//计算机里面最小单位是char类型，char类型是一个字节byte = 8bit -8个地址
//一个内存单元对应一个地址，需要拿出一个地址时才有了指针的概念

//int main()
//{
//	int a = 10; //a在内存中要分配空间 - 分配空间的大小为-4个字节
//	printf("%p\n",&a); //%p 专门用来打印地址的
//	int* pa = &a;//pa是用来存放地址的，在C语音中pa叫指针变量
//
//	//*说明pa是指针变量
//	// int 说明pa执行的对象是int类型的
//
//	char ch = 'w';
//	printf("%p\n", &ch);
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//* 解引用操作(单目操作符）| *pa就是通过pa里边的地址找到a
//
//	printf("%d\n", a);
//	return 0;
//}

//指针变量有多大：
//32位机器的指针大小都是4字节，64位机器指针大小都是8字节
int main()
{
	printf("%d\n", sizeof(char*)); //sizeof计算大小，计算char*的大小
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}