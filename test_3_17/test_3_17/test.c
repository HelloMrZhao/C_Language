#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//C�����к����ķ��ࣺ
//1.�⺯��
// ��վ��www.cplusplus.com
// C C++ �Ĺ��� http://en.cppreference.com    //en�ĳ�zh�������İ����
//2.�Զ��庯��

//���ܽᣬc���Գ��õĿ⺯�����У�
//1.IO����
// ����������� printf(), scanf(),getchar(), putchar()... 
//2.�ַ�����������
// strcmp()�Ƚ��ַ���, strlen()���ַ����Ⱥ�����
// 3.�ַ���������
// toupper����Сдת��д������
//4.�ڴ��������
// memcpy(),memcmp(),memset()
//5.ʱ��/���ں���
// time()
//6.���ֺ���
// sqrt()��������,pow()��η����� 
//7.�����⺯��

//strcpy(),�����ַ�����ǰ��Ĳ����ǵ�ַdestination������Ĳ�����sourceԴ
//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit"; //""˫���������ַ����ģ�{}���������ڳ�ʼ������Ԫ�صģ��������Ԫ�ص�
//	strcpy(arr1,arr2);
//	printf("%s",arr1);//��ӡarr1����ַ��� %s -���ַ����� ��ʽ��ӡ
//	return 0;
//}
//Debug�ǵ��԰汾
//Relese�Ƿ����汾


//memset�ڴ�����

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	return 0;
}

//strcpy
//char * strcpy(char* destination, const char* souurce);
//
//memset
//viod * memst(void* ptr, int value, size_tt num);
