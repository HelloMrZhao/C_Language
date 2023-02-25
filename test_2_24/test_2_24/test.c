#define _CRT_SECURE_NO_WARNINGS 1

//数据类型：

//计算机语言-写程序-解决生活问题
//必须有能力来描述生活问题
//C语言-浮点数
//购物商城-上架商品，价格-15.6元-小数  1.56*10^1
// -整型
// 年龄-50

//char  字符数据类型
//short 短整型
//int   整型
//long   长整型
//long long 更长的整型
//float 单精度浮点数
//double 双精度浮点数

//例：描述一个字符'a'

//int main()
//{
//	//字符型
//	//数据物料存储需要空间，字符存储也需要空间  
//	char ch='a';   //char类型给字符a创建一个空间叫ch，存放字符'a',将字符a存放入ch的变量空间中
//    //整型
//	int age = 20;
//	short num = 10; //短整型
//	//long 长整型
//	//long long 更长的整型
//	// 小数类型
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//	
//	return 0;
//}
#include <stdio.h>  //引入头文件
//int main()
//{
//
//	//printf("hello\n");
//	//printf("比特\n");
//	//printf("%d\n",100); //打印一个整数-%d格式就是打印，
//	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
//	printf("%d\n", sizeof(char));       //1  // 1字节（1头牛，1头鱼，1的单位是什么）sizeof的单位是什么？ -字节byte-（8个bit位）
//	printf("%d\n", sizeof(short));      //2
//	printf("%d\n", sizeof(int));        //4
//	printf("%d\n", sizeof(long));       //4  //C语言标准：sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));  //8
//	printf("%d\n", sizeof(float));      //4
//	printf("%d\n", sizeof(double));     //8
//
//	return 0;
//}
//注意：存在这么多类型，其实是为了更加丰富的表达生活中的各种值

 //生活中的一些数据：
 //有些数据不能变：血型，性别，圆周率.....
 //有些数据一定可变化：工资，年龄，体重.....

//C语言怎么描述
//常量 - 不能改变的量
//变量 - 能被改变的量


//定义变量的方法：
//int main()
//{
//	//创建的一个变量
//    //int是类型，先指定它是什么类型，用类型来创建这个类型的变量，age是变量的名字,（变量的名字=0声明变量）
//	int age = 20;
//	double weight = 75.3;
//	//变量意味着可改，例如：
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n",age);
//	printf("%lf\n", weight);
//	return 0;
//}
//%d - 整型
//%f - float
//%lf - double


//变量的分类：
//局部变量:在大括号{}内部的变量都被称为局部变量
//全局变量:在大括号{}外部的变量都被称为全局变量

//int a = 100;
//int main()
//{
//	//局部变量 - {}内部定义的
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议把全局变量和局部变量的名字写成一样的
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}


//变量的使用：
//写一个代码求两个整数的和
//scanf函数是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b); //输入两个整型，&：将整型放入对应的变量中
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;

}