#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int count = 0;
//	int i = 3;
//	while (i > 2)
//	{
//		i = i - 1;
//		count++;
//	}
//	printf("i=%d\n", i);
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break; //����һ��ѭ���������ȫ����һ��ѭ��
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;  //��������ѭ������ʣ����δִ�е���䣬����������һ�ε�ѭ�������ж�
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//1.��д1 - 100�����������г��ֶ��ٸ�����9
//��λΪ9��9  19 29 39.... 99
//ʮλΪ9��91 92 93 .......99

//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			num++;
//		}
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			num++;
//		}
//	}	
//	printf("\n%d\n", num);
//	return 0;
//}


//2.����1/1-1/2+1/3-1/4+1/5....+1/99-1/100��ֵ����ӡ�����
//����һ��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	double num1 = 0.0;
//	double num2 = 0.0;
//	double num3 = 0.0;
//
//	for (i = 1; i <= 100; i++)//����
//	{
//		if (i % 2 == 1)
//		{
//		
//			num1 += 1.0 / i;
//
//		}
//		if (i % 2 == 0)//ż�� 
//		{
//		
//			num2 += 1.0 / i;
//		}
//		
//	}
//	num3 = num1 - num2;
//	printf("%lf ", num1);
//	printf("%lf ", num1);
//	printf("%lf ", num1); 
//	printf("\n%lf ", num3);
//	return 0;
//}

//��������
//int main()
//{
//	int i = 0;
//    double num = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)//����
//	{
//		num += flag * 1.0 / i;
//		flag = -flag; //����1ת��
//	}
//
//	printf("%lf ", num);
//	return 0;
//}

//3.��10�����������ֵ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//} 

//4.����Ļ�����9*9�˷��ھ���
int  main()
{
	int i = 0;
	//����
	for (i = 1; i <= 9; i++)
	{
		//��ӡ����
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//%-2dÿλ��������ӡ��λ�����Ļ��ÿո��������룬%2d�Ҷ��룬ÿλ��������ӡ��λ
		}
		printf("\n");
	}
	return 0;
}

//5.//�������Ӧ��׷����ھ۵���ϣ����ھ���˼�����й��ܶ����������ڲ����Լ������Լ��Ĺ���Ҫ���Ķ���������Ͼ��Ǻ���������û��̫���ϵ���������������ط��ĵ��á�
//������ʹ��ȫ�ֱ���
//�����������ʱ�������˹���
//��ƺ�������������˭�������Դ��˭�ͷš�
//�⺯����ʹ�ñ���Ҫ������Ӧ��ͷ�ļ�
//�����е���ʽ����