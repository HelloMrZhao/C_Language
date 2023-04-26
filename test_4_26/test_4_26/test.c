#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//如有一下代码：
//struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;
////struct是结构体类型的关键字
////struct student是用户定义的结构体类型
////num,score都是结构体成员名
////stu是一个结构体变量
//
////结构体访问成员的操作符：
////点操作符(.)，点操作符左边是结构体变量右边是成员名
////结构体指针->成员名 --- （*结构体指针）.成员名
//
//
////关于VS调试快捷键说法：
////F5是开始调试，F5和F9是配合使用
////F10-是逐过程调试，遇到函数不进入函数
////F11-是逐语句调试，可以观察调试的每个细节
////F9是设置断点和取消断点


//下面程序要求输出结构体中成员a的数据，
#include <stdio.h>
struct S
{
	int a;
	int b;
};
int main()
{
	struct S a, * p = &a;
	a.a = 99;
	//printf("%d\n", a.a);  //99
	//printf("%d\n", p->a); //99
	printf("%d\n", (*p).a); //99

	return 0;
}
//访问成员的.操作符优先级高于间接访问的操作符*的优先级

//Debug被称为调试版本，程序调试找bug的版本
//Release被称为发布版本，测试人员测试的就是Release版本
//Debug版本包含调试信息，不做优化
//Release版本程序大小和运行速度上效果最优

