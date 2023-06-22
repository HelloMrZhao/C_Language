#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////2. 位段
////结构体讲完就得讲讲结构体实现 位段 的能力。
////2.1 什么是位段
////位段的声明和结构是类似的，有两个不同：
////1.位段的成员必须是 int、unsigned int 或signed int 。
////2.位段的成员名后边有一个冒号和一个数字。
//
//
//struct AA
//{
//	int _a;//INT_MAX ~ INT_MIN
//	int _b;
//	int _c;
//	int _d;
//};
//
//
//struct A
//{
//	int _a : 2;//_a这个成员只占2个bit位
//	int _b : 5;//_b这个成员只占5个bit位
//	int _c : 10;
//	int _d : 30;
//};//8
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct AA));
//
//	return 0;
//}  

//2.2 位段的内存分配
//1. 位段的成员可以是 int unsigned int signed int 或者是 //char （属于整形家族）类型
//2. 位段的空间上是按照需要以4个字节（ int ）或者1个字节（ //char ）的方式来开辟的。
//3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。



//枚举
//枚举更易于调试
//防止了命名的污染（封装）
//便于测试
// 使用方便，一次可以定义多个常量 
//enum Color
//{
//	RED = 5,
//	GREEN = 8,
//	BLUE
//};
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//
//};
//
//enum Color
//{
//	RED = 5,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	printf("%d\n", RED);//0 //5
//	printf("%d\n", GREEN);//1
//	printf("%d\n", BLUE);//2
//
//	enum Sex s = MALE;
//	enum Sex s2 = FEMALE;
//	enum Day d = Fri;
//	enum Color c = GREEN;
//
//	return 0;
//}

//test.c ---> 预编译--->编译--->汇编--->链接--->test.exe
//#define定义符号的替换

//联合（共用体）
//联合类型的定义
//联合也是一种特殊的自定义类型
//这种类型定义的变量也包含一系列的成员，特征是这些成员公用同一块空间（所以联合也叫共用体）。
//比如：


//结构体的关键字：struct
//联合的关键字：enum
//联合体（共用体）的关键字：union

//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()    
//{
//	union Un u;
//	u.c = 0x55;
//	u.i = 0;
//
//	printf("%d\n",sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}

//联合的特点
//联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小（因为联合至少得有能力保存最大的那个成员）。
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//
//}
//
//int main()
//{
//	if (1 == check_sys())
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	
//	//int i = 1;
//	////01 00 00 00
//	//if(1 == *(char*)&i)
//	//{
//	//	printf("小端\n");
//	//}
//	//else
//	//{
//	//	printf("大端\n");
//	//}
//	return 0;
//}


union Un
{
	char arr[5];//5
	int i;//4
};


union Yn 
{
    short arr[7];//14 2
	int i;//4  4
};

//所以联合体得大小不一定是内部最大成员的大小
//联合体得大小至少是它最大成员的大小
//当最大成员大小不是最大对齐整数倍得时候，就要对齐到最大对齐数得倍数
//比如：

int main()
{
	printf("%d\n", sizeof(union Un));//结果是8，因为存在对齐
	printf("%d\n", sizeof(union Yn));//结果是16，因为存在对齐

	return 0;
}