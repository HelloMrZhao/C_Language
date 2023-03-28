#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//3.数组越界
//数组下标是有范围限制的，下标都是从0开始，如果数组有n个元素，最后一个元素的下标就是n-1.
//所以如果数组的下标如果小于0，或者大于n-1,就是数组越界访问了，超出了数组合法空间的访问
//写完代码要做越界检查

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)//i<=10，越界访问
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//二维数组在超出合法范围后也是会产生越界的


//4.数组作为函数参数 
//假设我们要实现一个冒泡排序
//冒泡排序：数组中两个相邻的元素进行比较，如果不满足顺序就交换，先进行一趟冒泡排序，让一个数字来到它最终应该出现的位置
//
// void bubble_sort(int* arr)应该这样写
//
//void bubble_sort(int arr[], int sz)这样写也行
void bubble_sort(int arr[], int sz)
{
	//先确定趟数
	int i = 0;
	int flag = 1;//假设已经有序
	int count = 0;
	for (i = 0; i < sz - 1; i++)
	{
		count++; //记录需要多少趟
		//每一趟冒泡排序的过程 
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				//交换
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
	printf("count = %d ",count);
}
int main()
{
	int arr[] = { 3,5,1,-4,2,8,6,9,7,0 }; //数组乱序也可以排好
	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };

	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//写一个冒泡排序的函数，来排序arr数组的内容：
	//arr-表示首元素的地址-等价于&arr[0]的地址

	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}


//数组名是什么
//大部分情况下数组名就是数组首元素地址
//有2个例外：
//1> sizeof(数组名)，数组名不是数组首元素的地址，数组名表示整个数组，计算的是整个数组的大小
//2> &数组名，数组名不是数组首元素的地址，数组名表示整个数组，取出的是整个数组的地址 
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("\n");
//
//	printf("%p\n",&arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("\n");
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//printf("%d\n", sizeof(arr));//结果是40，这里的数组名就不是首元素的地址了
//	return 0;
//}