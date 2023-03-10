#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h> //有printf()函数所以要引用头文件#include <stdio.h>

//操作符：

// 单目操作符：
// 
//int main()
//{
//	int a = 0;
//	printf("%d\n",~a); //%d打印出来的是原码，二计算机内存里面存储的是补码，所以需要进行转换
//	//~ 按位取反，这个位是（二进制）位取法，把所有二进制位中数字，1变成0，0变成1
//	// 因为int是一个32位的整型有32个bit
//	//整数a里面放的是0，
//	//0的二进制位表示为:(0按位取反就是它的补码）
//	//00000000 00000000 00000000 00000000
//	//11111111 11111111 11111111 11111111 这是~a的结果，但是为什么打印出来是-1呢？：
//	//因为整数在内存中存储的是补码，而打印是以原码的形式打印的，所以0的原码按位取反后是补码，然后在反推回源码就是10000000 00000000 00000000 00000001，结果-1
//	//一个整数的二进制表示有3种：（针对于负数）
//	//原码：-1，10000000 00000000 00000000 00000001 最高位是符号位
//	//反码：-1，11111111 11111111 11111111 11111110 符号位不变其它位按位取反
//	//补码：-1，11111111 11111111 11111111 11111111 反码加1变补码
//	//正整数原码反码补码相同
//
//	return 0;
//}


//int main()
//{
	//int a = 10;
	//int b = a++;//后置++，先使用，再++

	//printf("%d\n", b); //10
	//printf("%d\n", a); //11

	//int a = 10;
	//int b = ++a;//前置++  - 先++后使用
	//printf("%d\n", b); //11
	//printf("%d\n", a); //11
//	return 0;
//}

//int main()
//{
//	//强制类型转换（不推荐使用）
//	int a = (int)3.14; //强制类型转换，将double类型强制转换成int类型，为了不产生警告可以给3.14前加一个括号（int）
//	printf("%d\n", a);
//	return 0;
//}

//关系操作符:
// 大于>
// 小于<
//大于等于>=
//小于等于<=
// 等于==    //用于测试“相等”
//不等于！=  //用于测试“不相等”

//逻辑操作符：
//&& 逻辑与
//|| 逻辑或

//int main()
//
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c); //打印结果为1，因为a和b都是真，并且里面两个同时为真结果才是真
//	/*if (a && b)
//	{
//
//	}*/
//	return 0;
//}


// 条件操作符：（三目操作符）
// exp1 ? exp2 : exp3  
//exp1, exp2, exp3, ...expN
//表达式时exp1如果成立，exp2表达式计算，整个结果是exp2的结果
//表达式时exp1如果不成立，exp3表达式计算，整个结果是exp3的结果
//
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
	//if (a >b)
	//{
	//	max = a;
	// printf("%d\n", max);
	//}
	//else
	//{
	//	max = b;
	// printf("%d\n", max);
	//}
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}


//逗号表达式:逗号隔开的一串表达式
//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	      // a=5        c=1        b=3
//	int d = (a = b + 2,c = a - 4, b = c + 2);
//	//逗号表达式从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}


//下标引用操作符：
// []
// ()
// .
// ->

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",arr[5]); //用数组时这里应用的 [] - 下标引用操作符
//	return 0;
//}

//函数调用操作符：
//int main()
//{
//	//调用函数的时候，函数名后边的圆括号（）就是函数调用操作符
//	printf("hello\n");
//	printf("%d\n", 100);
//	//函数调用操作符可以传多个操作符
//	return 0;
//}

 //常见关键字：（注：define和include不是关键字，这两个叫预处理指令）
//auto break - 循环或者switch语句中有 case - switch...case语句  char - 字符类型 const -常变量，修饰常变量，它是不能改的 continue - 继续 default - 默认 do -do...while循环 double -双精度 else -if...else语句  enum -枚举
//extern -声明外部符号 float -单精度浮点型 for -for循环 goto -goto语句 if -if语句 int -整型 long -长整型 register -寄存器关键字 return -返回 short -短整型 signed -有符号的
//sizeof -求大小 static -静态的 struct -结构体 switch -switch语句 typedef -类型定义 union -联合体（共用体） unsigned -无符号 void -无或空的意思 volatile  while -while循环
//C语言提供的关键字
//1.C语言自己提供的，不能自己创建关键字
//2.关键字不能做变量名
//auto 是自动的 - 每个局部变量都是auto修饰的
//int main()
//{
//	{
//		auto int a = 10; //这里a是自动创建自动销毁的，局部变量中int前可以加auto但是基本上都被省略
//		//auto 新的C语言中也有其他用法，暂时不考虑
//	
//	}
//	return 0;
//}

//int main()
//{
//	// 大量/频繁被使用的数据，想放在寄存器中，提升效率
//	register int num = 100;//建议num的值存放在寄存器中
//	return 0; //return返回0，跟int main（）函数的int呼应起来
//}

//typedef 类型重定义:（就是重新起个名字）
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100; 
//	u_int num2 = 100; //两个类型都一样都是无符号整型的变量
//	return 0;
//}

// static -静态的
// 1.static修饰局部变量，改变了局部变量的生命周期（本质上改变了变量的存储类型）
// 2.static修饰全局变量（会报错）,使得这个全局变量只能在自己所在的源文件（.c)内部使用，其它源文件不能使用
// 全局变量，在其它源文件内部可以使用，是因为全局变量具有外部连接属性，但是被static修饰之后，就变成了内部连接属性，其它原文件就不能连接到这个静态的全局变量了
// 3.static修饰函数（会报错），static修饰函数，使得函数只能在自己所在的源文件内部使用，不能在其它原文件内部使用，（本质上：static是将函数的外部链接属性变成了内部链接属性！（和static修饰全局变量一样！））
//内存会划分几个区域：
//1.栈区：存放了局部变量、函数参数、只要是局部的临时的变量都放在这
// 2.堆区：用来动态内存分配的
// 3.静态区：存全局变量和 static修饰的静态变量
//
//void test()
//{
//	//int a = 1; //打印结果2222222222
//	static a = 1; //打印结果2，3，4，5，6，7，8，9，10，11//a由栈区放到了static静态区，改变了他的存储类型
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{ 
//		test();
//		i++;
//	}
//	return 0;
//}
//signed 有符号的 10  -20
// unsigned 无符号的
//extern -声明外部符号：

//声明
//extern 声明外部符号
//extern int g_val;
//int main()
//{
//	printf("%d\n",g_val);
//	return 0;
//}

//声明函数
extern int Add(int,int);//只需要声明函数名是什么，返回类型是什么，参数类型是什么
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);

	return 0;
}