#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d", i);
//
//	}
//	return 0;
//}




//int func(int a)
//{
//	int b;
//	switch (a)  //switch�е�������������
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 10;
//	default: b = 0;
//	}
//	return b;
//}
//int main()
//{
//	printf("%d", func(1));
//	return 0;
//}

//F11 - �����
//F10 - �����

//2.��������ӡ�Ľ����ʲô��
//�����hellothird
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)//���switch�����case����û��break�������ΰ�˳��ִ��ÿ�����
//		{
//		case 0:
//			printf("frist");
//		case 1:
//			printf("second");
//		break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//д���뽫�����������Ӵ�С���
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("����������������\n");
//	scanf("%d%d%d",&a ,&b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("�������Ӵ�С��˳�����£�\n");
//	printf("%d %d %d\n",a,b,c);
//
//	return 0;
//}

//дһ�δ����ӡ1-100֮������3�ı���
//����һ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//��������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 33; i++)
//	{
//		printf("%d ", 3*i);
//	}
//	return 0;
//}

//��������
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}

//3.�����������������������Լ��
// �ҵķ�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0,b = 0;
//	int max = 0;
//	printf("��������������\n");
//	scanf("%d%d", &m, &n);//24  18
//	a = m;
//	b = n;
//	if (m < n)
//	{
//		if (n % m == 0)
//		{
//			printf("���Լ��Ϊ:%d\n", m);
//		}
//		else
//		{
//			
//			while (1)
//			{
//				  max = m--;
//				if (n % max == 0 && a % max == 0)
//				{
//					printf("���Լ��Ϊ:%d\n", max);
//					break;
//				}
//			}
//		}
//	}
//	else if (m > n)
//	{
//		if (m % n == 0)
//		{
//			printf("���Լ��Ϊ:%d\n", n);
//		}
//		else
//		{
//
//			while (1)
//			{
//				max = n--;
//				if (m % max == 0 && b % max == 0)
//				{
//					printf("���Լ��Ϊ:%d\n", max);
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}

//��ʦ�ķ�����
//int main()
//{
//	int m = 0, n = 0;
//	int max = 0;
//	printf("����������������\n");
//	scanf("%d%d", &m, &n);
//	if (m < n)
//	{
//		max = m;
//	}
//	else
//	{
//		max = n;
//	}
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ��Ϊ��%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//����������շת�������
//�ҵ�������
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	printf("����������������\n"); 
//	scanf("%d%d", &m, &n);
//	while (1)
//	{
//		t = m % n;
//		if (t == 0)
//		{
//			printf("���Լ��Ϊ��%d\n", n);
//			break;
//		}
//		m = n;
//		n = t;
//	}
//	return 0;
//}

//��ʦ��������
int main()
{
	int m = 0, n = 0;
	int t = 0;
	int a = 0, b = 0;
	printf("����������������\n");
	scanf("%d%d", &m, &n);
	a = m;
	b = n;
	while (t = m % n)
	{
		m = n;
		n = t;
	}
	printf("��󹫱���Ϊ��%d\n", a * b / n);
	printf("���Լ��Ϊ��%d\n", n);
	//��С������ = m*n/���Լ����
	return 0;
}