#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.小乐乐排电梯，他的前面有n个人在等电梯，电梯每次可以乘坐12人，每次上下需要的时间为4分钟(上2分钟，下2分钟),帮助小乐乐计算还需要多少分钟才能 乘电梯到达楼上。(假设电梯最初在1层)
//int main()
//{
//	int   n = 0;
//	scanf("%d", &n);
//	printf("%d\n", (n / 12)*4 + 2);
//	return 0;
//}



//2.实现字母的大小写转换多组输入输出。
//输入描述：多组输入，每一行输入大写字母。
//输出描述：针对每组输入输出对应的小写字母。
//备注：多组输入过程中要注意“回车”也是字母，所以要“吸收”(getchar())掉该字母。 

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //EOF相当于是\n
//	{
//		getchar();//缓冲区问题，去除\n
//
//		if (ch >= 'A' && ch <= 'Z')
//		{ 
//			ch+=32;
//		}
//		printf("%c\n", ch);
//	}
//	//putchar(ch); //putchar，打印一个字符 
//	return 0;
//}
////想让程序结束就按ctrl + z;因为按ctrl + z就触发getchar(),返回一个EOF


//3.能把函数处理结果的两个数据返回给主调函数
//方法一：形参用数组
//void test(int arr[])
//{
//	int x = 4;
//	int y = 5;
//	arr[0] = x;
//	arr[1] = y;
//}
//int main()
//{
//	int arr[] = { 1,2,3 };
//	test(arr);
//	//printf("%d\n",test());
//
//	return 0;
//}
//方法二：形参用两个指针
//void test(int*pa,int*pb)
//{
//	int x = 10;
//	int b = 20;
//	*pa = 10;
//	*pb = 20;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	return 0;
//}

//方法三：用两个全局变量

//int g_a = 0;
//int g_b = 0;
//void test()
//{
//	int x = 10;
//	int y = 20;
//	g_a = x;
//	g_b = y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test();
//	a = g_a; 
//	b = g_b;
//	return 0;
//}


//4.写一个函数来打印乘法口诀表
//void Multiply(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//
//		}
//		printf("\n"); 
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Multiply(n);
//	return 0;
//}

//5.递归--递归存在限制条件，当满足这个限制条件时递归不再继续
//每次递归之后就越来越接近这个限制条件，递归层次太深会出现栈溢出的现象
//int funk1(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * funk1(n + 1);
//}
//int main()
//{
//	printf("%d\n", funk1(2));
//	
//	return 0;
//}

//6.编写一个函数reverse_string(str*string)(递归实现)
//实现：将参数字符串中的字符反向排列，不是逆向打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如：char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba

//1.非递归方法一：指针做法
//#include <string.h>
//void reverse_string(char*str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}		
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//2.非递归方法二：用下标来写
//#include <string.h>
//void reverse_string(char arr[])
//{
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int len = strlen(arr);
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//递归写法
#include <string.h>
void reverse_string(char*str)
{
	int len = strlen(str);
	char tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if(strlen(str + 1) >= 2)
	reverse_string(str + 1);
	*(str + len - 1) = tmp;

}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}