#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <math.h>


//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1), ������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//
//���磺
//
//655 = 6 * 55 + 65 * 5
//
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//��� 5λ���е����� Lily Number��
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//�ж�i�Ƿ�Ϊlily-number
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int n = i % (int)pow(10, j);//pow����η��ĺ�����������Ǹ������ͣ���Ҫǿ������ת��Ϊint
//			int m = i / (int)pow(10, j);
//			sum += n * m;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//} 


//�ж���ĸ
//�Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд��
//���磺����һ���ַ���
//������ַ�����ĸ��YES�����ǣ�NO��

int main()
{
	int ch = getchar();
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}