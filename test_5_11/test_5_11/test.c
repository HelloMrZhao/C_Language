#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ص������İ���
//qsort��һ���⺯��
//���ڿ��������㷨ʵ�ֵ�һ������ĺ���
#include <stdlib.h>
void bubble_sort(int arr[], int sz)//���ﲻ����ͨ����
{
	int i = 0;
	int flag = 1;//����Ϊ��������
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
	//����Ϊ����
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
	//����Ϊ����
	qsort(arr, sz,sizeof(arr[0]),cmp_int);  //��qsort������
	printf_arr(arr, sz);
}


int main()
{
	test2();
	return 0;
}

//void qsort(void* base, //base��ŵ��Ǵ��������ݵ���ʼλ��
//	       size_t num, //�����Ԫ�ظ���
//	       size_t width, //һ��Ԫ�ص��ֽڴ�С
//	   int(__cdecl* compare)(const void* elem1, const void* elem2)
//            );//����ָ��
////compare�ǱȽϺ������Ƿ�װ�ıȽϺ����������ķ���������int
////elem1��elem2�Ǵ��Ƚϵ�����Ԫ�صĵ�ַ
////���elem1  less than elem2����С��0������
////���elem1  equivalent to elem2���ص���0������
////���elem1  greater than elem2���ش���0������

