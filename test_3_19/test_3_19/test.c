#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//�����ĵ��÷�Ϊ���� 
//��ֵ����:
// �������βκ�ʵ�ηֱ�ռ�ò�ͬ���ڴ�죬���βε��޸Ĳ���Ӱ��ʵ�Ρ�
//��ַ���ã�
//��ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
//���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı�����
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* pa, int* pb)//ָ�����
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap1(a, b);//��ֵ���ã����Ǵ��������������ı��βε�ֵ����Ӱ��ʵ��
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//��ַ���ã����Ǵ������������ĵ�ַ
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

//1.дһ�������ж�һ�����ǲ�������
//(����-������ֻ�ܱ�1����������������)
//����һ���ų����е�ż��
//#include <math.h>
//int Sushu(int x)
//{
//	if (x != 2 && x % 2 == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(x); j++)
//		{		
//			if (x % j == 0)
//			{
//				return 0;
//			}		
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	printf("������һ��������\n");
//	scanf("%d", &a);
//	int n = Sushu(a);
//	if (n == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

//дһ���������ж�һ���ǲ�������
//�����꣺�ܱ�400���������������
//��ͨ�꣺�ܱ�4���������ܱ�100���������������
//�ҵ�������
//int Year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0 )
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("��������ݣ�\n");
//	scanf("%d", &a);
//	if (Year(a) == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{ 
//		printf("��������\n");
//	}
//	return 0;
//}

//��ʦ��������
// 
//һ�����������д�������ͣ�Ĭ�Ϸ���int����
//
//int is_leap_year(int x)
//{
//	return ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0));
//		/*{
//			return 1;
////		}*/
////else
////{
////	return 0; //һ��Ҫ����retuen 0,�����ַ��ؽ��дȫ��
////}
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n����ĸ�����%d\n", count);
//	return 0;
//}

//3.дһ��������ʵ��һ��������������Ķ��ֲ���
//�ҵķ�����
//int search(int x)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//		if (left > right)
//		{
//			return -1;
//		}
//	}
//}
//int main()
//{
//	printf("����Ҫ���ҵ�����\n");
//	int a = 0;
//	scanf("%d", &a);
//	if (search(a) != -1)
//	{
//		printf("�ҵ��ˣ��±���ǣ�%d\n", search(a));
//
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//��ʦ�ķ�����
int search(int x[], int y, int z)
{
	int left = 0;
	int right = z - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x[mid] < y)
		{
			left = mid + 1;
			mid = (left + right) / 2;//�ҵ������ƽ��ֵ
		}
		else if (x[mid] > y)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
			break;
		}
		if (left > right)
		{
			return -1; //δ�˱����������Է���-1������0
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("����Ҫ���ҵ�����\n");
	int a = 0;//Ҫ���ҵ�����
	int sz = sizeof(arr) / sizeof(arr[0]);//�ܴ�С���Ե�һ��Ԫ�صĴ�С���������Ԫ�ظ���
	scanf("%d", &a);
	int ret = search(arr, a, sz);
	if (ret != -1)
	{
		printf("�ҵ��ˣ��±���ǣ�%d\n", ret);

	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}