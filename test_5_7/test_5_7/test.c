#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//5.函数指针
//函数指针-指向函数的指针
//

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10];
//
//	int(*p) = &arr; //p是一个数组指针变量
//	printf("%p\n", &Add);//打印函数的地址005C10B4
//	printf("%p\n",  Add); //005C10B4
//	//以上两种写法的意义是一样的
//
//	int(*pf)(int,int) = Add;//pf就是函数的指针变量
//	//(*pf)表示一个指针，指针指向的是一个函数()--->指向函数的参数是(int,int),它指向这个函数的返回类型是int,所以这里的pf就是函数的指针变量
//	return 0;
//}


//int test(char* str)
//{
//
//}
//int main()
//{
//	int (*pt)(char) = test;
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//
//	int(*pf)(int,int) = Add;//把Add赋给pf，pf就是函数的指针变量
//	//(*pf)解引用找到Add这个函数
//	//int ret = (*pf)(2, 3);//传参
//	int ret = pf(2, 3);
//	printf("%d\n ", ret);
//	return 0;
//}

//int ret = (*)(2, 3)表示函数指针类型


//阅读两个段有趣的代码
//int main()
//{
//	(*(void (*)())0)();
//	//代码1
//	//void (*)() 是一个函数指针类型
//	//void (*p)() 表示(*p)这个指针指向一个函数，这个函数无参，指针的返回类型是void
//	//(void (*)()),将一个函数指针类型“void (*)()”放进括号，表示强制类型转换
//	//注意：(类型)，类型放进括号里就是强制类型转换
//
// 	//(void (*)())0，表示对0进行强制类型的转换，把0强制类型转换成void (*)()这样的函数类型指针，那就认为0地址处放着返回类型为void参数为空的这样一个函数
//
//	//总结：
//	//1.首先是把0强制类型转换为一个函数指针类型，这就意味着0地址处放一个返回类型是void,无参的一个函数
//	//2.调用0地址处的这个函数
//	//
//	return 0;
//}


int main()
{
	//代码2
	void (*signal(int, void(*)(int)))(int);//函数声明
	//signal首先和()结合，signal表示一个函数名，这个函数的第一个参数是int,第二个参数是void(*)(int)函数指针类型，void (*）(int)是函数的一个返回类型

	//总结：
	//1.signal是一个函数的声明
	//2.signal函数的参数，第一个是int类型的，第二个是void(*)(int)的函数指针类型
	//3.signal函数的返回类型也是：void(*)(int)


	//简化：
	typedef void(*pf_t)(int);//给函数指针类型void(*)(int)重新起名叫:pf_t
	pf_t signal(int, pf_t);
	return 0;
}
 