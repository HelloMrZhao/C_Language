#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算两个二进制数列中的不同位数有几位
//方法一
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int diff = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			diff++;
//		}
// 	}
//	printf("%d\n", diff);
//	return 0;
//}


////方法二：
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int diff = 0;
//	int tmp = m ^ n;//异或
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		diff++;
//	}
//	printf("%d\n", diff);
//	return 0;
//}


//打印整数二进制的奇数位和偶数位，分别打印出二进制序列
//000000000000000000000000000000000000000000000110
//

//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	//奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//
//	//打印偶数位
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}


//创建一个函数利用指针来打印出数组的元素
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//将一个字符串的内容颠倒过来在输出，例如：
// I am a student
// tneduts a ma I
#include <string.h>
void print(char* p, int len)
{
	int i = 0;
	for (i = len; i >= 0; i--)
	{
		printf("%c", *(p + i));
	}
}
int main()
{
	char arr[1000] = {0};
	//gets(arr);
	//scanf("%[^\n]", arr);
	fgets(arr, 100, stdin); //fgets可以读取字符空格，stdin是标准输入
	int len = (int)strlen(arr);
	print(arr, len);
	//printf("%d", len);
	return 0;
}