#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//return一次只能返回一个参数
//形参可以用数组，例：
//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	
//	return 0;
//}


////形参可以用两个指针，例：
//void test(int*p1, int*p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//} 


//可以用两个全局变量把函数处理结果的两个数，返回给主函数，但是不建议这样做，例：
//int a = 0;
//int b = 0;
//void test()
//{
//	a = 1;
//    b = 2;
//}
//
//int main()
//{
//	test();
//  	return 0;
//}

//函数可以传值调用，传值调用的时候形参是实参的临时拷贝
//函数可以传址调用，传址调用的时候，可以通过形参操作实参
//函数可以嵌套调用但不能嵌套定义
//实参和形参可以同名
//主调函数和被调函数不一定在同一文件里

//函数必须保证先申明在使用
//形参在函数调用时才实例化，才开辟内存空间
//函数调用exec((v1,v2),(v3,v4),v5,v6);中，实参的个数是：
// 逗号表达式：
//exec((v1,v2),(v3,v4),v5,v6)是逗号表达式，由逗号隔开的表达式就是逗号表达式
//逗号表达式会从左向右依次计算，但整个逗号表达的结果是最后一个表达式的结果，就是v2的结果，exec(v2,v4,v5,v6)

//实现一个函数打印乘法口诀表，乘法口诀表的行数和列数由自己决定
//void multiply(int z)
//{
//	int x = 0;
//	for (x = 1; x <= z; x++)
//	{
//		int y = 0;
//		for (y = 1; y <= x; y++)
//		{
//			printf("%d*%d=%2d ", x, y, x * y);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	//int b = 0;
//	scanf("%d", &a);
//	multiply(a);
//	//printf("%d*%d=%2d ", a, b, a * b);
//	return 0;
//}

//关于递归：
//1.存在限制条件，当满足这个限制条件的时候，递归不在继续
//2.每次递归之后越来越接近这个条件
//3.递归层次太深，会出现栈溢出现象
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int main()
//{
//	int n = 0;
//	int a = Fun(2);
//	printf("%d\n", a);
//	return 0;
//}

//内存在计算机语言中主要分为三个区：栈区、堆区、静态区
//栈区：存放局部变量、函数参数、调用函数时返回值等临时的变量
//堆区：动态内存分配
//静态区：存放全局变量（int g_val =  0;)、静态变量（static int num = 0)

//字符串逆序递归实现：
//
//#include <string.h>
//#include <windows.h>//Sleep();休眠函数的头文件
//void Str_test(char arr1[], char arr2[])
//{
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[right];
//		printf("%s", arr2);
//		Sleep(500);
//		right--;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = " ";
//	Str_test(arr1,  arr2);
//	return 0;
//}
// 

//老师的非递归方法1：
//int my_strlen(char* str)//定义一个函数求字符串长度
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left <= right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//老师的非递归方法2：
//int my_strlen(char* str)//定义一个函数求字符串长度
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left <= right)
//	{
//		//char tmp = str[left]; 
//		char tmp = *(str + left); //等价于char tmp = str[left]; 
//		//str + left就是让str这个指针向后偏移找到下一个元素
//		*(str + left) = str[right];
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//用递归方法实现：
int my_strlen(char* str)//定义一个函数求字符串长度
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	char tmp = *str;//1
	int len = my_strlen(str);
	*str = *(str + len - 1);//2
	*(str + len - 1) = '\0'; //3
	//加判断条件
	if (my_strlen(str+1)>=2)
	{
		reverse_string(str + 1);//4,逆序中间bcde字符串

	}
	*(str + len - 1) = tmp;//5
	
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);//fedcba
	return 0;
}