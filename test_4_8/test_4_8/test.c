#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.����ָ��

//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa��ָ�������һ��ָ�룩��*��������pa��ָ�����
//	int** ppa = &pa;//ppa��һ������ָ�룬*��������ppa��ָ�룬int*��������ppaָ��Ķ�����int*��    
//	int*** pppa = &ppa;//pppa��������ָ��
//	return 0;
//}


//2.ָ������ - ���ָ�������
//��������
//int main()
//{
//	//int arr[5];//ָ������ - ������͵�����
//	//char ch[6];//�ַ����� - ����ַ�������
//
//	int a = 10;
//	int b = 11;
//	int c = 12;
//	int d = 13;
//	int e = 14;
//	int* arr2[5] = { &a,&b,&c,&d,&e };//ָ������
//	//���ָ����ߴ�ŵ�ַ������ͽ�ָ�����飬ÿ��Ԫ�ض���һ��ָ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%p\n", arr2[i]);
//		printf("%d\n", *(arr2[i]));
//
//	}
//	return 0;
//}
 
int main()
{
	int data1[] = { 1,2,3,4,5 };
	int data2[] = { 2,3,4,5,6 };
	int data3[] = { 3,4,5,6,7 };

	//arr����һ��ָ������
	int* arr[3] = { data1, data2,data3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]); //����һ
			//����һ��Ϊʲô����arrǰ��*���н����õ�ԭ���ǣ�arr�е�[]�͵ȼ�����*�����ã�[]��ʵ�����ڷ����������Ԫ�أ����Բ���Ҫ��*
			//printf("%d ", *(arr[i]+j));//������
		}
		printf("\n");
	}
	return 0;
}