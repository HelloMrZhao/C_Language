#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int tag = 1;//������һ����������
	//ȷ������
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ��ð������Ĺ���
		//����jΪԪ�ص��±�
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) //ȷ��һ���н��ж��ٶԵıȽ�
		{
			if (arr[j] < arr[j + 1]) //��������
			{
				tag = 0;
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (tag == 1) //��һ��ð��������жϴ������Ƿ�Ϊ��������
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);  //����Ԫ�ظ���
	int i = 0;
	//дһ��ð����������������arr���������
	bubble_sort(arr, sz);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
