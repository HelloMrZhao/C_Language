#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//��̬�ڴ�����4������
//malloc ����ռ�
//free  ���տռ�
//calloc
//realloc
//int main()
//{
//	int a = 10;//4
//	int arr[10] = { 0 };//40���ֽ�
//
//	return 0;
//}


//����ָ����һ��ָ��
//int(*a)[10]��int���͵�����ָ��
//int*a[10]��int ���͵�ָ������
//int(*a[10])(int)�Ǻ���ָ�����͵�����
//char str1[] = "hello bit."
//char str2[] = "hello bit."
//str1 �� str2�ǲ�һ����

//char *str3 = "hello bit.";
//char *str4 = "hello bit.";
//str3 �� str4��һ����

//�ַ�����ת
//ʵ��һ��������������ת�ַ����е�k���ַ�
//���磺
//ABCD����תһ���ַ��õ�BCDA
//ABCD����ת�����ַ��õ�CDAB
//#include <string.h>
//
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr); 
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		char tmp = arr[0];
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//
//int main()
//{
//	//����ת�ַ��Ĵ���f
//	char arr[20] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}



//�������������ַ���
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char arr[], int k)
{
	int len = strlen(arr); 
	k %= len;
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);;
}

int main() 
{
	//����ת�ַ��Ĵ���f
	char arr[20] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	left_move(arr, k);
	printf("%s\n", arr);
	return 0;
}