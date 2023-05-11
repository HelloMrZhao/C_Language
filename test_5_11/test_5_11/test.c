#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//回调函数的案例
//qsort是一个库函数
//基于快速排序算法实现的一个排序的函数
#include <stdlib.h>
void bubble_sort(int arr[], int sz)//这里不具有通用性
{
	int i = 0;
	int flag = 1;//假设为有序数列
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{ 
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}

		}
		if (flag == 1)
			break;
	}

}

void printf_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序为升序
	bubble_sort(arr, sz);
	printf_arr(arr, sz);
}

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

void test2()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序为升序
	qsort(arr, sz,sizeof(arr[0]),cmp_int);  //用qsort排整型
	printf_arr(arr, sz);
}


int main()
{
	test2();
	return 0;
}

//void qsort(void* base, //base存放的是待排序数据的起始位置
//	       size_t num, //数组的元素个数
//	       size_t width, //一个元素的字节大小
//	   int(__cdecl* compare)(const void* elem1, const void* elem2)
//            );//函数指针
////compare是比较函数，是封装的比较函数，函数的返回类型是int
////elem1与elem2是待比较的两个元素的地址
////如果elem1  less than elem2返回小于0的数字
////如果elem1  equivalent to elem2返回等于0的数字
////如果elem1  greater than elem2返回大于0的数字

