#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//���������Ƶ��ַ�������
//strncpy   
//strncat
//strncmp
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "quertyuiop";
//
//	strncpy(arr1, arr2, 6);//����num���ַ���Դ�ַ�����Ŀ��ռ�
//	//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num��
//	printf("%s\n", arr1);
//	return 0;
//}




//int main()
//{
//	char arr1[20] = "abcdef\0xxxxxx";
//	char arr2[] = "qwertyuiop";
//	strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//
//	return 0;
//}



int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "qwertyuiop";
	int ret = strncmp(arr1, arr2, 4);
	printf("%d\n", ret);
	return 0;
}