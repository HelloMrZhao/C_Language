#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ָ��Ľ���
//1.�ַ�ָ��
//2.����ָ��
//3.ָ������
//4.���鴫�κ�ָ�봫��
//5.����ָ��
//6.����ָ������
//7.ָ����ָ�������ָ��
//8.�ص�����
//9.ָ�������������Ľ���

//1. ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ䡣
//2. ָ��Ĵ�С�ǹ̶���4 / 8���ֽڣ�32λƽ̨ / 64λƽ̨����
//3. ָ���������ͣ�ָ������;�����ָ��� + -�����Ĳ�����ָ������ò�����ʱ���Ȩ�ޡ�
//4. ָ������㡣

//1.�ַ�ָ��
//��ָ�������������֪����һ��ָ������Ϊ�ַ�ָ��char*;

//int main()
//{ 
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch); //a
//	return 0; 
//}

//int main()
//{
//	const char* p = "abcdef"; //"abcdef"�ǳ����ַ���,���ܱ���
//	//*p = 'w';//err
//	//p��ָ���������x86�Ļ�������4���ֽ�
//	printf("%c\n", *p);
//	printf("%s\n", p); 
//	return 0;
//}   

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//    char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 != p2\n");
//	}
//
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//	return 0;
//}

//2.ָ������
//ָ��������һ�����ָ�������

//��������
//int arr[10];//������͵�����

//�ַ�����
//char arr2[5]; //����ַ�������

//int main()
//{
//	//int* arr[10]; //ÿ��Ԫ�ض���ָ�룬�������ָ�������
//	//char* ch[5];//����ַ�ָ�������
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//
//	int* arr[3] = { &a, &b, &c };//arr����һ��ָ������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 2,3,4,5,6 };
	int arr3[5] = { 3,4,5,6,7 };
	 
	int* parr[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{                      
			printf("%d ", *(parr[i] + j));
			//printf("%d ", (parr[i][j]));
		}
		printf("\n");
	}
	return 0;
}