#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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
////����ָ������ 
//int main()
//{
//	//ָ������
//	//�ַ�ָ������
//	char* arr[5];
//	//����ָ������
//	int* arr2[4];
//
//
//	//����ָ���ź����ĵ�ַ��
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf3)(int, int) = Mul;
//	int (*pf4)(int, int) = Div;
//
//	//����ָ������
//	int (*pf[4])(int, int) = { Add,Sub,Mul,Div };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pf[i](8, 2);
//		printf("%d\n", ret);
//	}
//	return 0;
//}



//����ָ��������÷���
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


//ʵ��һ������������ͨ������
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
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);	
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Add(x,y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break; 
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//		printf("ret = %d\n", ret);
//	} while (input);
//	return 0;
//}


//�ú���ָ������ʵ��һ����������
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("#########################\n");
	printf("#####  1.add  2.sub #####\n");
	printf("#####  3.mul  4.div #####\n");
	printf("#####  0.exit       #####\n");
	printf("#########################\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	//ת�Ʊ�
	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//��0��Ϊ�˽�Add�ĵ�ַ��Ϊ1���Ժ�Ԫ�صĵ�ַ������
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������\n");
		}
		else if (input >= 1 && input <= 4)
		{
			printf("������2��������:>");
			scanf("%d%d", &x, &y);
			ret = pfArr[input](x, y);
			printf("ret=%d\n", ret);
		}
		else
		{
			printf("ѡ�����\n");
		}		
	} while (input);
	return 0;
}