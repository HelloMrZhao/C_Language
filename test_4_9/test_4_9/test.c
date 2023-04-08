#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//1.初识结构体
//1>结构体类型的声明
//2>结构体的初始化
//3>结构体成员访问
//4>结构体传参
//描述一个复杂对象的时候就需要创建结构体，例如描述一个学生的相关信息
//int main()
//{
//
//	return 0;
//}

//1>结构体的声明
//1.1结构的基础知识
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
//1.2结构的声明
//struct tag
//{
//	member-list;
//
//}; variable-list;
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[8];//性别
//	float score;
//}s1,s2,s3;//s1,s2,s3是 通过struct Stu类型创建的变量，这里的变量可以写一个，可以写多个，也可以不写
////此时创建的s1,s2,s3是全局变量
//
//int main()
//{
//	//声明好struct Stu结构体后，还可以直接在main函数中创建结构体变量d4,s5
//	//struct Stu 才是结构体类型，不能随便省略struct
//	struct Stu s4;
//	struct Stu s5;
//	//这里的s4,s5是局部变量
//	return 0;
//}

//如果想要省略struct就需要用到typedef--类型重定义/重命名 
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[8];//性别
//	float score;
//}s1, s2, s3;//s1,s2,s3是 通过struct Stu类型创建的变量，这里的变量可以写一个，可以写多个，也可以不写
////此时创建的s1,s2,s3是全局变量
//
//typedef struct Stu Stu;
//
//int main()
//{
//	Stu s6;
//	//这里的s6是局部变量
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[8];//性别
//	float score;//分数
//}Stu;//这里的Stu就不是变量列表了，Stu是这个类型的重命名
//
//int main()
//{
//	Stu s6;
//	//这里的s6是局部变量
//	return 0;
//}
//1.3结构成员的类型
// 结构体的成员可以是标量、数组、指针，甚至其它结构体。
//就是普通直观的变量，例如：int age，float score就是标量

//1.4结构体变量的定义和初始化
//定义一个坐标
//struct Point //类型声明
//{
//	int x;
//	int y;
//}p1 = { 10,15 };//给变量p1初始化10行，15列,初始化要用大括号{}
//
//struct S 
//{
//	char c;
//	struct Point sp;
//	double d;
//	char arr[20];
//};
//
////结构体中的也可以有指针，指针在初试化的时候给他放地址就行，如果不知道是社么地址就放入空指针就行NULL，例：
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10,{4,5},NULL };
//
//int main()
//{
//	struct Point p = { 100 ,200 };
//	struct S ss = { 'w',{100,20},5.5,"hello" }; //对复杂结构体进行嵌套初始化
//	struct Node n2 = { 20,{5,6},NULL };//结构体嵌套初始化
//	return 0;
//}

//3>结构体成员访问
//使用结构成员操作符
//.   结构体变量.结构体成员 
//->  结构体指针->结构体成员 

//struct Point //类型声明
//{
//	int x;
//	int y;
//}p1 = { 10,15 };//给变量p1初始化10行，15列
//struct S 
//{
//	char c;
//	struct Point sp;
//	double d;
//	char arr[20];
//};
//
//int main()
//{ 
//	struct S ss = { 'w',{100,20},5.5,"hello" }; //对复杂结构体进行嵌套初始化
//	//打印结构体成员
//	printf("%c\n", ss.c);//ss.c就是ss的成员c,这里就使用了‘.’点操作符
//	printf("%d %d\n", ss.sp.x, ss.sp.y);//打印横纵坐标x,y
//	printf("%lf\n", ss.d);
//	printf("%s\n", ss.arr);
//	return 0;
//} 


struct Point //类型声明
{
	int x;
	int y;
}p1 = { 10,15 };//给变量p1初始化10行，15列
struct S
{
	char c;
	struct Point sp;
	double d;
	char arr[20];
};

void print1(struct S s)
{
	printf("%c\n", s.c);//ss.c就是ss的成员c,这里就使用了‘.’点操作符
	printf("%d %d\n", s.sp.x, s.sp.y);//打印横纵坐标x,y
	printf("%lf\n", s.d);
	printf("%s\n", s.arr);
}

void print2(struct S* ps) //ps是结构体指针，指向ss
{
	printf("%c\n", ps->c); //ps->,就表示ps指向结构体成员c
	printf("%d %d\n", ps->sp.x, ps->sp.y);//ps指向对象sp，sp是结构体成员变量，他里面有两个成员一个是x,一个是y
	printf("%lf\n", ps->d) ; 
	printf("%s\n", ps->arr);
}
int main()   
{
	struct S ss = { 'w',{100,20},5.5,"hello" }; //对复杂结构体进行嵌套初始化
	//打印结构体成员
	ss.c = 'b';
	ss.sp.x = 1000;
	ss.sp.y = 2000;
	ss.d = 3.14;
	strcpy(ss.arr, "world");//strcpy字符串拷贝，由于strcpy是库函数所以需要应用#include <string.h>头文件
	//print1(ss);//调用print1()函数打印 struct S类型的变量
	print2(&ss); //将ss的地址传给函数print2();
	return 0;
}
 
//4>结构体传参
//把结构体的一个变量或者他的地址进行传递，传递给另外一个函数，这就叫结构体传参 
//>[注意]print2(&ss)这种传地址的方式更加节省空间，如果直接使用print1(ss)串实参给形参，此时形参就是实参的临时拷贝，假如一个函数的结构体占用100个字节,同时还花费了许多时间，临时拷贝给形参后整体又增加100个字节。然而转地址这种方式所占用的空间可能就只有几个字节。
//函数传参时，参数是需要压栈的。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降。
//结论：结构体传参的时候，要传结构体的地址