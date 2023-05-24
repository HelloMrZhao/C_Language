#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <math.h>


//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）, （14和61）, （146和1), 如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//
//例如：
//
//655 = 6 * 55 + 65 * 5
//
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//求出 5位数中的所有 Lily Number。
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//判断i是否为lily-number
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int n = i % (int)pow(10, j);//pow是求次方的函数，求出的是浮点类型，需要强制类型转化为int
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


//判断字母
//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）
//例如：输入一个字符，
//输出该字符是字母（YES）或不是（NO）

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