#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//-自定义类型：结构体，枚举，联合	
//结构体
//结构体类型的声明
//结构的自引用
//结构体变量的定义和初始化
//结构体内存对齐
//结构体传参
//结构体实现位段（位段的填充& 可移植性）
//枚举
//枚举类型的定义
//枚举的优点
//枚举的使用
//联合
//联合类型的定义
//联合的特点
//联合大小的计算


//结构体
//1 结构体的声明
//1.1 结构的基础知识
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不/同/类型的变量。
//1.2 结构的声明

//struct tag//tag是结构体标签    
//{
//	 member - list;//成员列表
//
//}variable - list;//变量列表

//struct Stu //Stu结构体标签
//{
//	char name[20]; //结构体成员
//	int age;
//	double score;
//
//}s1,s2,s3;//变量列表，变量列表可以省略不写
//
////struct Stu s1;//可以直接这样创建全局变量
//
//struct Book
//{
//	char name[20];
//	float price;
//	char id[12];
//};
//
//int main()
//{
//	struct Book b1;
//	struct Stu s2, s3;
//
//	return 0;
//}

//特殊的声明
//在声明结构体的时候，可以不完全声明

//比如：
//匿名结构体类型
//匿名结构体只能用一次
//匿名结构体的成员如果一样，在编器看来也是不同类型的结构体
//struct
//{
//	char name[20];
//	char id[12];
//
//}ss;//用匿名结构体类型创建了这个变量叫ss


//结构的自引用
//在结构中包含一个类型为该结构本身的成员是否可以呢？


//定义一个链表的结构体
//struct Node
//{
//	int data;//数据
//	struct Node*next;//指针
//};
//
//int main()
//{
//	struct Node n;
//
//	return 0;
//}



//typedef //类型重命名
//typedef struct Node
//{
//	int data;//数据
//	struct Node* next;//指针
//}Node;//对整个结构体重命名为Node,后续在使用的时候就可以省略struct不写,这里的Node就相当于struct Node
//
//typedef struct Node
//{
//	int data;//数据
//	struct Node* next;//对这个结构体指针重新命名叫pNode
//}Node, * pNode; //pNode --> struct Node*
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//} 


//结构体变量的定义和初始化

struct Book
{
	char name[20];
	float price;
	char id[12];
}s = {"西游记",55.5f,"XYJ001"};//对于这本书S的定义,在定义的过程中进行初始化



//结构体嵌套
struct Node
{
	struct Book b;
	struct Node* nexrt;
};
int main()
{
	struct Book s2 = { "三国演义",66.6f,"SGYY001" };
	struct Node n = { {"水浒传",66.8,"SHZ001"}, NULL };//嵌套类型的初始化

	return 0;
}