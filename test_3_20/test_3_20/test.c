#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//дһ��������û����һ������������ͻὫnum��ֵ����1
//void Add(int* p)
//{
//	(*p)++; //һ���ǵ�Ҫ������
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����
//��������Ƕ�׶��壬���ǿ���Ƕ�׵��ã�����
//void test3()
//{
//	printf("hehe\n");
//}
//void test2()
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//  }

//��ʽ���ʾ��ǰ�һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
//#include <string.h>
//int main()
//{
	//int len = strlen("abc");
	//printf("%d\n", len);

	////��ʽ����
	//printf("%d\n", strlen("abc"));

	//char arr1[20] = { 0 };
	//char arr2[] = "bit";
	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);//��ͨ����
	//printf("%s\n",strcpy(arr1,arr2));//strcpy()�����ķ���ֵ����printf()�����Ĳ���,�������ʽ����

	//printf()�������ص��Ǵ�ӡ����Ļ�ַ��ĸ���
//	printf("%d", printf("%d", printf("%d", 43)));//printf()�����ķ���ֵ����printf()�����Ĳ���,�������ʽ����
//	return 0;
//}

//�����������Ͷ��壺

// ������������
//1.���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ����޹ؽ�Ҫ��
//2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
//3.����������һ��Ҫ����ͷ�ļ���

//�����Ķ��壺
//�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ�֡�

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ��;�����ڸ�֪����ôһ������
//	int Add(int, int);
//
//	printf("%d\n", Add(a, b));
//	return 0;
//}
//
////�����Ķ��壻�����ڴ���һ������
//int Add(int x, int y)
//{
//	return x + y;
//}
#include "add.h"
#include "sub.h"

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	int d = Sub(a, b);
	printf("%d\n", d);
	printf("%d\n", c);
	return 0;
}