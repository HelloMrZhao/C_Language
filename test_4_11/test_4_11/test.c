#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����ջ�Ĵ���������
//����ջ֡
//ebp,esp ��2���Ĵ����д�ŵ��ǵ�ַ
//��2����ַ������ά������ջ֡�ġ�

//ÿһ���������ã���Ҫ��ջ������һ���ռ�
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}  

//5.1ʵ��һ
//ʵ�ִ��룺��1��+ 2��+ 3��+ ....+ n!;���������
//��д��n!

//int main()
//{
//	//����n�Ľ׳�
//	int n = 0;
//	//scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)//�ȴ�ӡ��1~n
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//�Բ���1��+ 2��+ 3��+ ....+ n!;���������
//int main()
//{
//	int n = 0;
//	//scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}

//������1��+ 2��+ 3��+ ....+ n!;���������
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	int a = 0;
	scanf("%d", &a);//ȷ��һ���׳˺͵ķ�Χ
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= a; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
}

//�Բ�ð������
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//ȷ��Ԫ�صĸ���
//	//ȷ����Ҫð��������
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//�۲�ÿһ���ڲ��ıȽ����
//		//ȷ��ÿһ�˵ıȽ϶���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])//��������
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		//printf("%d ", arr[i]);
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}