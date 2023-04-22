#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//统计二进制中1的个数
//写一个函数返回参数二进制中1的个数
//比如： 15  00001111  4个1
//int Numberof1(unsigned int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Numberof1(n);
//	printf("%d\n", ret);
//	//10
//	//00000000 00000000 00000000 000001010
//	return 0;
//}
 

//方法2：
//int Numberof1(int n)
//{
//	unsigned int m = n;
//	int count = 0;
//	while(m)
//	{
//		if (m % 2 == 1)
//		{
//			count++;
//		}
//		//n /= 2;
//		m = m / 2;
//
//	} 
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Numberof1(n);
//	printf("%d\n", ret);
//	//10
//	//00000000 00000000 00000000 000001010
//	return 0;
//}


//方法3：
//n = n & (n-1)
//n = 13
//1101 - n
//1100 - n - 1
//1100 - n
//1011 - n -1
//1000 - n
//0111 - n-1
//0000 - n
int Numberof1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Numberof1(n);
	printf("%d\n", ret);
	//10
	//00000000 00000000 00000000 000001010
	return 0;
}
