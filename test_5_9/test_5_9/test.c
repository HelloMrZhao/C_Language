#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
////void test()
////{
////	printf("hehe\n");
////}
////int main()
////{
////	printf("%p\n", test);
////	void(*pf)() = test;
////	(*pf)();
////	test();
////	pf();
////
////	return 0;
////}
//
////�ú���ָ������ʵ��һ����������
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("#########################\n");
//	printf("#####  1.add  2.sub #####\n");
//	printf("#####  3.mul  4.div #####\n");
//	printf("#####  0.exit       #####\n");
//	printf("#########################\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//ת�Ʊ�
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//��0��Ϊ�˽�Add�ĵ�ַ��Ϊ1���Ժ�Ԫ�صĵ�ַ������
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������2��������:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}
//





//7.ָ����ָ�������ָ��

int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7 };
	int (*p)[10] = &arr;//p������ָ��


	int (*pf)(int, int) = &Add;
	//����ָ��


	//����ָ������
	int (*pfarr[4])(int, int);
	int(*(*p3)[4])(int,int) = &pfarr;//p3��һ��ָ����ָ�������ָ��
	//p3�Ǵ�ŵ���pfarr�ĵ�ַ����������p3����pfarr,ֻ��ͨ��*p3�����ú���ҵ�pfarr����ʱ��*p3����pfarr.
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int ret = (*p3)[i](3,4);
		printf("%d\n", ret);
	}

	//
	return 0;
}



