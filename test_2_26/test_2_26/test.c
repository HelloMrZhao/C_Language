#define _CRT_SECURE_NO_WARNINGS 1

//常量：
//C语言常量分为以下几种：
//
//字面常量
//const修饰的常变量
//#define定义的标识符常量
//枚举常量

#include <stdio.h>

#define MAX 10000 //define定义出来的符号
//int main()
//{
	//1.字面常量
	//3.34;//浮点型常量
	//10;//整型常量
	//'a';//字符常量
	//"abcdef";//字符串常量

	//2.const修饰的常变量
	//int num = 10;//变量
	//const int num = 10;//被const修饰的常变量，num就被称为常变量-具有常属性（不能改变的属性）

	//num = 20;
	//printf("num = %d\n",num); //因为num可变所以结果是20

	//int arr[10] = {0};//创建数组，数组10个元素
	//int n = 10;
	//int arr2[n] = {0};//报错，因为n在指定数组大小的时候n是变量的，这里是不行的
	
	//3.#define 定义的标识符常量
	//MAX = 20000;//err,因为MAX在#define定义后就变成一个常量是不能修改的
	/*int n = MAX;
	printf("n=%d\n", n);*/
//	return 0;
//}


//性别
enum Sex //enum枚举类型
{
	//这种枚举类型的变量的未来可能取值
	//这三个值就是枚举常量，而这三个又是enum Sex这种类型的枚举变量
	MALE,
	//MALE=3,//赋初值，
	FEMALE,
	SECRET
};
int main()
{
	//4.枚举常量
	//可以一一列举的常量 :例如，性别:男、女、保密,血型，星期，三原色:红、黄、蓝.....

	enum Sex s = MALE;
	printf("%d\n", MALE);  //0  //枚举常量是一个常量默认从0开始
	printf("%d\n",FEMALE); //1
	printf("%d\n", SECRET);//2
	return 0;
	}
	