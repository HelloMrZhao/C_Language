#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//#define ���峣���ͺ꣺
//difine ��Ԥ����ָ��
//1.difine�������,���峣����

//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define �����:
//#define ADD(x,y)  x+y
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));//���4*2+3=11
//	return 0;
//}

//#define ADD(x,y)  ((x)+(y))
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));//���4*(2+3)=20
//	return 0;
//}

//ָ�룺ָ�� ���� ��ַ
//�Ƚ��ڴ棺һ���ڴ浥Ԫ����Լ�һ���ڴ浥Ԫ��α�ŵģ�һ���ڴ浥Ԫ����һ���ֽ�
//�����������С��λ��char���ͣ�char������һ���ֽ�byte = 8bit -8����ַ
//һ���ڴ浥Ԫ��Ӧһ����ַ����Ҫ�ó�һ����ַʱ������ָ��ĸ���

//int main()
//{
//	int a = 10; //a���ڴ���Ҫ����ռ� - ����ռ�Ĵ�СΪ-4���ֽ�
//	printf("%p\n",&a); //%p ר��������ӡ��ַ��
//	int* pa = &a;//pa��������ŵ�ַ�ģ���C������pa��ָ�����
//
//	//*˵��pa��ָ�����
//	// int ˵��paִ�еĶ�����int���͵�
//
//	char ch = 'w';
//	printf("%p\n", &ch);
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//* �����ò���(��Ŀ��������| *pa����ͨ��pa��ߵĵ�ַ�ҵ�a
//
//	printf("%d\n", a);
//	return 0;
//}

//ָ������ж��
//32λ������ָ���С����4�ֽڣ�64λ����ָ���С����8�ֽ�
int main()
{
	printf("%d\n", sizeof(char*)); //sizeof�����С������char*�Ĵ�С
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}