#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//8.�ص����� 

//void test()
//{
//	printf("hehe\n");
//}
//
//void print_hehe(void (*p)())
//{
//	if (1)
//		p();
//}
//int main()
//{
//	print_hehe(test); 
//	return 0;
//}


//�÷�
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
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("����������\n");
//	scanf("%d%d", &x, &y);
//	ret = pf(x,y);
//	printf("ret = %d\n", ret);
//
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);	
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//	
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break; 
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//�ص������İ���
//qsort��һ���⺯��
//���ڿ��������㷨ʵ�ֵ�һ������ĺ���
#include <stdlib.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int flag = 1;//����Ϊ��������
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}

		}
		if (flag == 1)
			break;
	}

}

void printf_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����Ϊ����
	bubble_sort(arr, sz);
	printf_arr(arr, sz);
	return 0;
}