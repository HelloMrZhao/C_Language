#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//调整奇数偶数的顺序
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分

//自己的想法：
//void order(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	int left = 0;
//	int right = sz - 1;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//		/*	tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;*/
//			printf("%d ", arr[i]);
//
//		}
//		//else
//		//{
//		///*	tmp = arr[left];
//		//	arr[left] = arr[right];
//		//	arr[right] = tmp;
//		//	left++;
//		//	right--;*/
//		//	//printf("%d ", arr[i]);
//
//		//}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	order(arr, sz);
//	//printf("%d", arr);
//	return 0;
//}

