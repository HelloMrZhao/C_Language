#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�ַ��������ַ�������
int main()
{
	//'a';//c�����е������������Ľ��ַ�
	//char ch = 'a';//�ַ����ͽ�char ch
	//"abcdef";//˫�����������ľͽ����ַ���������C����û���ַ������ͣ�����C�����ṩ��һϵ�еĿ��Բ����ַ������ַ���������غ���
	//char arr[10] = { 'a','b','c','d','e','f' };//6
	char arr[7] = { 'a','b','c','d','e','f' };//6,��������ʮ���ռ䵫��ֻ��6���ַ�������6���ַ�����ʼ��������Ŀռ�Ĭ��Ϊ0��ϵͳ��0�ͱ�ʾ\0

	int len = strlen(arr);//string length
	printf("%d\n", len);
	return 0;
}