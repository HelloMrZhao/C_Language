#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>
//#include <assert.h>
////�ַ���������������
////1>�������ַ�����������
////2>���ַ����е�ÿ�����ʽ�������
//void reverse(char* l, char* r)
//{
//	//�������
//	assert(l && r);
//	while (l < r)
//	{
//		char tmp = *l;
//		*l = *r;
//		*r = tmp;
//		l++;
//		r--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s\n", arr); //ͨ����scanfд���޷���ȡ�ո����ַ���
//	//scanf("%[^\n]", arr);//��������д�Ϳ��ԣ�scanf��ͷ��βһֱ��ȡֱ������\n��ֹͣ
//	
//
//	//Ҳ����ֱ��ʹ��gets������������ֱ�Ӷ�ȡ�ո�
//	gets(arr);
//	//printf("%s\n", arr);
//	char* left = arr;
//	int len = strlen(arr);
//	char* right = arr + len - 1;
//
//	//�����ַ���
//	reverse(left, right);
//
//	//���򵥴�
//	char* cur = arr;
//	char* start = arr;
//	
//	while(*cur != '\0')
//	{
//		while (*cur != ' ' &&  *cur != '\0')
//		{
//			cur++;
//		}
//		reverse(start, cur - 1);
//		start = cur + 1;
//		if(*cur != '\0')
//		cur++;
//	}
//		printf("%s\n", arr);
//
//	return 0;
//}


//�Բ⣺
//#include <string.h>
//#include <assert.h>
//void reverse(char* l, char* r)
//{
//	//�Ӷ���
//	assert(l && r);
//	while (l < r)
//	{
//		char tmp = *l;
//		*l = *r;
//		*r = tmp;
//		l++;
//		r--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%[^\n]", arr);
//	gets(arr);
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	reverse(left, right);
//
//	//ÿ����������
//	char* cur = arr;
//	char* start = arr;
//	while (*cur != '\0')
//	{
//		while (*cur != ' ' && *cur != '\0')
//		{
//			cur++;
//		}
//		reverse(start, cur - 1);
//		start = cur + 1;
//		if (*cur != '\0')
//			cur++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

// (����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����)

//int main()
//{
//	int n = 0;
//	n = 100;
//	int i = 0;
//	double j = 0;
//	double k = 0;
//
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 != 0) 
//		{
//			j += 1.0 / i;
//		}
//		if (i % 2 == 0)
//		{
//			k += 1.0 / i;
//		}
//	}
//	printf("%lf\n", j-k);
//	return 0;
//}


//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

////�Բ⣺
//int main()
//{
//	double sum = 0;
//	int flag = 1;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}

