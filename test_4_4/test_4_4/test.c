#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };//(3,4)����һ�����ű��ʽ��ֻ��ȡ���ź�ı��ʽ
//	printf("%d\n", sizeof(arr));//sizeof�Ǽ���������Ԫ���ֽ����ģ�һ������Ԫ�ر�ʾ4���ֽ�
//	return 0;
//}

//int main()
//{
//	char str[] = "hello bit";
//	//h e l l o _ b i t \0
//	printf("%d %d\n", sizeof(str), strlen(str)); //���10��9
//	//sizeof(str)=10��char������һ���ֽڣ����ַ�����ʹ��sizeofʱ���\0©��
//	//�ո�Ҳ��һ���ַ�
//	//��������ĳ��Ⱦ��������е�Ԫ�ظ���Ҫ��\0�������ַ����ĳ���ʱ���ü�\0
//	return 0;
//}

//��������ʾ��Ԫ�صĵ�ַ

   
////��reverse()����ʵ������Ԫ�ص�����
//#include <string.h>
//void init(int arr[], int sz)//�������е�Ԫ�س�ʼ��Ϊ0
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//
//}
//void print(int arr[], int sz) //��ӡ�������ÿһ��Ԫ��
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	
//	}
//}
//void reverse(int arr[],int sz) //�������Ԫ�ص�����
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
	//������A�е����ݺ�����B�е����ݽ��н�����������һ����
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int arr3[5] = { 0 };

	//���������ǵ�ַ
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