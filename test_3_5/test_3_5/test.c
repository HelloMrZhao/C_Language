#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//结构体：
//结构体可以让C语言创建新的类型出来

//创建一个学生
struct stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct stu s = { "张三",20,85.5 };//结构体的创建和初试化
	//%lf是打印双精度浮点型的，单精度打印用%f
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量//.操作符，找到这个结构体的成员访问它的成员用的是“.”操作符
	struct stu * ps = &s;//struct stu *是结构体指针，ps是指针变量
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//箭头->使用方式:结构体指针->成员变量名
	return 0;
}