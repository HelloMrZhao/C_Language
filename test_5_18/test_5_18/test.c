#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//%llu --longlong unsingal,sizeof��64λƽ̨��Ҫ��%llu
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%llu\n", sizeof(arr));//6
//	printf("%llu\n", sizeof(arr + 0)); //4/8  arr+0��������Ԫ�صĵ�ַ
//	printf("%llu\n", sizeof(*arr)); //1- *arr��������Ԫ�أ���Ԫ����һ���ַ�����С��һ���ֽ�
//	printf("%llu\n", sizeof(arr[1])); //1- arr[1]������ĵڶ���Ԫ�أ���Ԫ����һ���ַ�����С��һ���ֽ�
//	printf("%llu\n", sizeof(&arr)); //4/8 - &arr������ĵ�ַ���ǵ�ַ����4/8
//	printf("%llu\n", sizeof(&arr + 1)); //4/8 - &arr+1-�Ǵ�����ĵ�ַ��ʼ����������������������һ����ַ���ǵ�ַ���Ĵ�С����4/8���ֽ�
//	printf("%llu\n", sizeof(&arr[0] + 1));//&arr[0]ȡ������ĵ�һ��Ԫ�أ���1���ǵڶ���Ԫ�صĵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%llu\n", strlen(arr));//���ֵ����Ϊstrlen��Ҫ��\0,f�����ĸ�λ������\0��δ֪��
//	printf("%llu\n", strlen(arr + 0));//���ֵ��arr+0����������Ԫ�صĵ�ַ
//	printf("%llu\n", strlen(*arr));//err-����һ������ʾ���� arr��������Ԫ�صĵ�ַ��*arr���������Ԫ�أ�'a'acll��ֵ��97������97����strlenʱ��strlen�ʹ�97��ʼ���Ѱ��\0,������Ұָ�������
//	printf("%llu\n", strlen(arr[1]));//err - 'b'- 98
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ - a�ĵ�ַ��1��b�ĵ�ַ��strlen��b�ĵ�ַ�����
//	return 0;
//}
//sizeof��һ��������
////ע��sizeof���Ǻ������ǲ�������������û�취ģ�����
//sizeof ������Ƕ�����ռ�ڴ�Ĵ�С-��λ���ֽڣ�����ֵ��������size_t
//���ں��ڴ��д�ŵ���ʲô��ֻ�ں��ڴ��С

//strlen��һ���⺯��
//���ַ������ȣ��Ӹ����ĵ�ַ�������ַ���ͳ��\0֮ǰ���ֵ��ַ�����

int main()
{
	char arr[] = "abcdef";//�ַ�����ʼ������
	//[a b c d e f \0]
	//printf("%d\n", sizeof(arr));//7,sizeof�ڲ�������һ�������������������������ռ�ռ��ڴ�Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(arr + 0));//4/8 - ��������Ԫ�صĵ�ַ������a�ĵ�ַ���ǵ�ַ���ǣ���С����4/8���ֽ�
	//printf("%d\n", sizeof(*arr));//*arr���������Ԫ�أ���Ԫ�صĴ�С����a�Ĵ�С��a�Ĵ�С����1 
	//printf("%d\n", sizeof(arr[1]));//arr[1]������ĵڶ���Ԫ�أ�Ԫ��b�Ĵ�С����1
	//printf("%d\n", sizeof(&arr));//4/8 - &arr������ĵ�ַ����������ĵ�ַ��Ȼ�ǵ�ַ���ǵ�ַ��С����4/8���ֽ�
	//printf("%d\n", sizeof(&arr + 1));//����ĵ�ַ��1����ʾ�ľ�������һ�����飬��\0����������ַ 
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - ������ڶ���Ԫ�صĵ�ַ���ǵ�ַ����С����4/8���ֽ�


	//strlenͳ�Ƶ���\0����֮ǰ�ַ��ĸ���
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6 
	printf("%d\n", strlen(&arr + 1));//��\0��ʼ�����������ֵ
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}
