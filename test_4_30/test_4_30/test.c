#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int tag = 1;//假设是一个有序数组
	//确定趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟冒泡排序的过程
		//假设j为元素的下标
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) //确定一趟中进行多少对的比较
		{
			if (arr[j] < arr[j + 1]) //降序排序
			{
				tag = 0;
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (tag == 1) //第一趟冒泡排序后，判断此数列是否为有序数列
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);  //计算元素个数
	int i = 0;
	//写一个冒泡排序函数，来排序arr数组的内容
	bubble_sort(arr, sz);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
