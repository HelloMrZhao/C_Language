#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//打印n的阶乘
//int main()
//{
//	int n = 0;
//	//先打印n个数
//	//scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int j = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//计算1！+2！+3！+...+n!
//int main()
//{
//	int n = 0;
//	//先打印n个数
//	int a = 0;
//	scanf("%d", &a);
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= a; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//打印冒泡排序
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//分析冒泡排序的过程
//	//确定冒泡排序趟数
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟需要比较几对
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//每一对是怎么比较的
//			if (arr[j] < arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//        {
//			break;
//        }
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


//练习调试代码

//死循环
//代码里面先创建i在创建arr，因为i和arr都是局部变量，局部变量都是放在栈上的，栈区的使用习惯是先使用高地址处的空间在使用低地址处的空间，而又应为数组下标的增长地址是由低到高变化的，如果在内存分配的时候i和arr中间恰好有两个整型空间，当我们循环的时候向后越界就有可能使用arr[12]的时候就是我们的i。
//这个代码是基于当前在VS底下的一个内存布局，这个代码是非常依赖环境的，环境不一样可能效果就由所差异了
//int main()
//{
//
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//栈区的使用序贯：先使用高地址处的空间，在使用低地址处的空间
//数组随着下标的增长地址由低到高变化

//6.如何写出好（易于调试）的代码。
//6.1优秀代码
//1>代码运行正常
//2>bug很少
//3>效率高
//4>可读性高
//5>可维护性高
//6>注释清晰
//7>文档齐全

//常见的coding技巧：
//1>使用assert
//2>尽量使用const
//3>养成良好的编码风格
//4>添加必要的注释
//5>避免编码的陷阱

//6.2示范
//模拟实现库函数:strcpy
//我的做法:
//#include <string.h>
//void my_strcpy(char arr1[], char arr2[])
//{
//	int i = 0;
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	int j = 0;
//	for (j = 0; j < len2; j++)
//	{
//		arr2[j] = '\0';
//	}
//
//	for (i = 0; i < len1; i++)
//	{
//		int tmp =  arr1[i];
//		 arr1[i] = arr2[i];
//		 arr2[i] = tmp;
//	}
//	//printf("%s\n", arr2);
//}
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = { "xxxxxxxxxxxxx"};
//	//strcpy(arr2, arr1);//arr1作为源头地址，arr2作为目的地址，strcpy将源头地址拷贝的目的地址中
//    my_strcpy(arr1, arr2);	
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <string.h>

//老师的做法：
// 5分
//void my_strcpy(char*dest, char*src )
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//
//	}
//	*dest = *src;
//}

//化简--6分
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++; //后置++，先使用后加加
//	}
//	*dest = *src;
//}

//化简--7分
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//标准的strcpy函数用法 -- char*strcpy(char*strDestination,const char*strSource);
//优化--8分
//使用断言assert
//断言可以帮我们间接的定位问题，比程序直接崩溃有意义
//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	//assert(dest != NULL);//断言
//	//assert(src != NULL);//断言
//	assert(dest && src);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//优化--9分
//使用const来限制src被改变，防止源头地址和目标地址写反
//#include <assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest && src);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "";
//	char* p = NULL;
//	//strcpy(arr2, arr1);//arr1作为源头地址，arr2作为目的地址，strcpy将源头地址拷贝的目的地址中
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//优化--10分
//返回char*
//#include <assert.h>
////my_strcpy函数设计返回值类型是为了实现函数的链式访问
//char*my_strcpy(char* dest, const char* src)
//{
//	int* ret = dest; //为了返回dest的首地址
//	assert(dest && src);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxxxxx";
//	//strcpy(arr2, arr1);//arr1作为源头地址，arr2作为目的地址，strcpy将源头地址拷贝的目的地址中
//	
//	printf("%s\n", my_strcpy(arr2, arr1)); //实现了函数的链式访问
//	return 0;
//}


//关于const的介绍
//int main()
//{
//	//int num = 10;
//	//num = 20;
//	//int* p = &num;
//	//*p = 30;
//	//printf("%d\n", num); //30
//
//	//const int num = 10;
//	////num = 20; //err
//	//int* p = &num;
//	//*p = 20;//
//	//printf("%d\n", num); //20,既然const限定了num是一个常变量，但是用指针进行强制修改是不合理的。
//	
//
//	//const int num = 10;
//	////num = 20; //err
//	//const int* p = &num;
//	////*p = 20;//err
//	//int n = 30;
//	//p = n;
//	//printf("%d\n", p);//30
//
//
//	const int num = 10;
//	//num = 20; //err
//	const int* const p = &num;
//	//*p = 20;//err
//	int n = 30;
//	//p = n; //err
//
//	//const 可以修饰指针
//	//const 放在*的左边（const int *p)
//	//const修饰的是*p,表示p指向的对象不能通过p来改变，但是p中的地址是可以改变的
//	//const 放在*的右边（int* const p;)
//	//const 修饰的是p,表示p的内容不能被改变，但是p指向的对象是可以改变的
//	//
//	return 0;
//}


//模拟实现strlen
//我的做法：
//#include <string.h>
//size_t my_strlen(const char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//化简
#include <assert.h>
#include <string.h>
int my_strlen(const char* str)
{
	assert(str != NULL);//断言
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] ="abcdef";
	printf("%d\n", my_strlen(arr));
	return 0;
}

//用递归实现strlen函数
