#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////�����ַ���
//#include <string.h>
//int main()
//{
//	char arr[10000] = { 0 };
//	//gets(arr);
//	//scanf("%[^\n]", arr);
//	fgets(arr, 10000, stdin);
//	int len = (int)strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}


//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2+22+222+2222+22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + 2;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//���0~100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷǡ�õ��ڸ��������磺153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3,��153��һ��"ˮ�ɻ���".
//
//#include <string.h>
//#include <math.h>
//int main()
//{
//	//�ж�i�Ƿ���������
//	//1.����i��λ�� - n
//
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp) //1234
//		{
//			sum += (int)pow(tmp % 10, n); //����һ������n����	
//			tmp /= 10;
//		}
//
//		//3.�Ƚ�
//		if (sum == i)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}


//�Բ�:
//#include <math.h>
//int main()
//{
//	//1.�ж�һ������λ��
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int tmp = i;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//
//		//2.����ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//
//		//3.�ж�
//		if (sum == i)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}


//��C���Դ�ӡ������

//int main()
//{
//	//��ӡ�ϰ벿��
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	
//	}
//
//	//��ӡ�°벿��
//	for (i = 0; i < n-1; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*(n-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
 

//�Բ⣺
int main()
{
	//��ӡ�ϰ벿��
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		//��ӡ��
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}

		//��ӡ*
		for (j = 0; j < 2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//��ӡ�°벿��
	for (i = 0; i < n-1; i ++)
	{
		//��ӡ��
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}

		//��ӡ*
		for (j = 0; j < 2 * (n-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}