#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//дһ�����������������Ľϴ�ֵ
//MAX - һ�㲻����Ѻ���������д��ȫ��д
//int Max(int a,int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d",&x,&y);
//	/*if (x > y)
//	{
//		printf("max=%d\n", x);
//	}
//	else
//	{
//		printf("max=%d\n", y);
//	}*/
//	int m = Max(x,y);
//	printf("max=%d\n", m);
//
//	return 0;
//}

//дһ�����������������ĳ˻�
//int Multiple(int x, int y)
//{
//	int z;
//	z = x * y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int j = Multiple(a, b);
//	printf("J=%d\n", j);
//	return 0;
//}

//��д������Ϊ8��10��12��14��16�Ĵ���
//int Zcl(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a+b+c);
//}
//int main()
//{
//	int a = 2;
//	for (int i = 0; i < 5 ;i++)
//	{
//		printf("%d\n", Zcl(a));
//	}
//	return 0;
//}

//int main()
//{
//	printf("           **           \n");
//	printf("           **           \n");
//	printf("     ***************    \n");
//	printf("     ***************    \n");
//	printf("          *  *          \n");
//	printf("          *  *          \n");
//	return 0;
//}

//�������һ������M��1<=M<=100,000)
//�������һ�У����M���Ա�5���������YES���������NO�������Сд���У�
//ע��д����һ��Ҫ�Ͻ���
int main()
{
	int M =0;
	scanf("%d", &M);

		if (M % 5 == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		return 0;
	}
