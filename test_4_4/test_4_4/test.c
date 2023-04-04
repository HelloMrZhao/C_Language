#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };//(3,4)这是一个逗号表达式，只提取逗号后的表达式
//	printf("%d\n", sizeof(arr));//sizeof是计算数组中元素字节数的，一个整型元素表示4个字节
//	return 0;
//}

//int main()
//{
//	char str[] = "hello bit";
//	//h e l l o _ b i t \0
//	printf("%d %d\n", sizeof(str), strlen(str)); //结果10，9
//	//sizeof(str)=10，char类型是一个字节，在字符串中使用sizeof时别把\0漏掉
//	//空格也算一个字符
//	//计算数组的长度就是数组中的元素个数要加\0，计算字符串的长的时不用加\0
//	return 0;
//}

//数组名表示首元素的地址

   
////用reverse()函数实现数组元素的逆置
//#include <string.h>
//void init(int arr[], int sz)//将数组中的元素初始化为0
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//
//}
//void print(int arr[], int sz) //打印出数组的每一个元素
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	
//	}
//}
//void reverse(int arr[],int sz) //完成数组元素的逆置
//{
//	int left = 0; 
//	int right = sz - 1;
//	int tmp = 0;
//	int i = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	init(arr, sz);
//	printf("\n");
//
//	print(arr, sz);
//	printf("\n");
//	reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//}

int main()
{
	//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int arr3[5] = { 0 };

	//数组名就是地址
	//arr3 = arr1;
	//arr1 = arr2;
	//arr2 = arr3;

	int sz = 0;
	sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;

	for (i = 0; i < sz; i++)
	{

		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		//printf("%d ", arr1[i]);
		//printf("%d\n", arr2[i]);	
	}
	
	return 0;
}