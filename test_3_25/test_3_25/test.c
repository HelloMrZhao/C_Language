#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//a ? b : c��ʲô��˼
//������������ʽ,��ʾ���aΪ��,����ʽֵΪb,���aΪ��,����ʽֵΪc
//https://www.nowcoder.com/ta/beginner-programmersţ����ˢ���ַ

//1.����һ������ÿλ֮�ͣ��ݹ�ʵ�֣���
//дһ��������DigitSum(n),����һ���Ǹ����������������������֮��
//���磬����DigitSum(1729),��Ӧ�÷���1+7+2+9�����ĺ���19
//���룺1729�������19

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}


//2.�õݹ���ʵ��n��k�η�
double Pow(int n, int k)
{
	int i = 0;
	if (k > 0)
	{
		return n * Pow(n,k - 1);
	}
	else if(k == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / (Pow(n, -k));
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}