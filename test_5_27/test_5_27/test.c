#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//strlen
//size_t strlen ( const char * str );
//�ַ����Ѿ� '\0' ��Ϊ������־��strlen�������ص������ַ����� '\0' ǰ����ֵ��ַ�����������
//�� '\0' )��
//����ָ����ַ�������Ҫ�� '\0' ������
//ע�⺯���ķ���ֵΪsize_t�����޷��ŵģ� �״� ��
//ѧ��strlen������ģ��ʵ��
//ע��
int main()
{
	const char* str1 = "abcdef";
	const char* str2 = "bbb";
	if (strlen(str2) - strlen(str1) > 0)
	{
		printf("str2>str1\n");
	}
	else
	{
		printf("srt1>str2\n");
	}
	return 0;
}