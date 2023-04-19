#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//数组指针
//3.1数组指针的定义
//数组指针是指针
//
//int main()
//{
//	int a = 10;
//	int* p = &a;//整型指针 - 指向整型的指针，存放整型变量地址的
//	char ch = 'w';
//	char* pc = &ch;//字符指针 - 指向字符的指针，存放的是字符变量的地址
//
//	//数组指针 - 指向数组的指针 
//	int* p1[10]; //p1是数组，指针 数组
//	int(*p2)[10]; //p2是数组指针
//  int (*)[10]//是数组指针类型
//	//p先和*结合，说明p是一个指针变量，然后指针指向的是一个大小为10个整型的数组。所以p是一个指针，指向一个数组，叫数组指针 
//	
//	//这里要注意：[]的优先级要高于*号的，所以必须加上()来保证p先和*结合
//	return 0;
//} 

int main()  
{
	int a = 10;
	int* p = &a;

	int arr[10] = { 0 };
	//数组名是首元素的地址    
	//&arr取出的是数组的地址
	//%p打印地址

	printf("%p\n", arr);                              //004FF8B8
	printf("%p\n", &arr[0]);                          //004FF8B8
	printf("%p\n", &arr);                             //004FF8B8
								                      
								                      
								                      
	printf("%p\n", arr);                              //004FF8B8
	printf("%p\n", arr + 1);                          //004FF8BC

 	printf("%p\n", &arr[0]); //int*这是整型指针类型     //004FF8B8
	printf("%p\n", &arr[0] + 1); //004FF8BC


	printf("%p\n", &arr); //int(*)[10]这是数组指针类型  //004FF8B8
	printf("%p\n", &arr + 1);                        //004FF8E0

	return 0;
}