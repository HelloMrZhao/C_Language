
//冒泡排序
//往往我们在写代码的时候，会将数组作为参数传给函数，比如:实现一个冒泡排序
//将一个整型数组排序
//数组中2个相邻元素进行比较，如果不满足顺序就交换
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int flag = 1;//假设是一个有序数组
	//确定趟数
	for (i = 0; i < sz-1; i++)
	{
		//每一趟冒泡排序的过程
		//假设j为元素的下标
		int j = 0;
		for (j = 0; j < sz-1-i; j++) //确定一趟中进行多少对的比较
		{
			if (arr[j] < arr[j + 1]) //降序排序
			{
				flag = 0;
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 1) //第一趟冒泡排序后，判断此数列是否为有序数列
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 2,4,5,7,3,8,9,1,0,4 }; 
	int sz = sizeof(arr) / sizeof(arr[0]);  //计算元素个数
	int i = 0;
	//写一个冒泡排序函数，来排序arr数组的内容
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]); //计算出元素个数
	//确定需要多少趟
	int flag = 1;//假设是有序数列
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//确定有几对需要比较
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//进行比较
			if (arr[j] > arr[j + 1])//升序排序
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}