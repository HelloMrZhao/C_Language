#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//动态内存管理的4个函数
//malloc 申请空间
//free  回收空间
//calloc
//realloc
//int main()
//{
//	int a = 10;//4
//	int arr[10] = { 0 };//40个字节
//
//	return 0;
//}


//数组指针是一种指针
//int(*a)[10]是int类型的数组指针
//int*a[10]是int 类型的指针数组
//int(*a[10])(int)是函数指针类型的数组
//char str1[] = "hello bit."
//char str2[] = "hello bit."
//str1 与 str2是不一样的

//char *str3 = "hello bit.";
//char *str4 = "hello bit.";
//str3 与 str4是一样的

//字符串旋转
//实现一个函数可以左旋转字符串中的k个字符
//例如：
//ABCD左旋转一个字符得到BCDA
//ABCD左旋转两个字符得到CDAB
//#include <string.h>
//
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr); 
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		char tmp = arr[0];
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//
//int main()
//{
//	//左旋转字符的代码f
//	char arr[20] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}



//方法二：逆序字符串
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char arr[], int k)
{
	int len = strlen(arr); 
	k %= len;
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);;
}

int main() 
{
	//左旋转字符的代码f
	char arr[20] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	left_move(arr, k);
	printf("%s\n", arr);
	return 0;
}