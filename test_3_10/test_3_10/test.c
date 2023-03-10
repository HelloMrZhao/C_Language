#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//for循环
//for(表达式1；表达式2；表达式3）
//{循环语句；}
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		/*if (a == 5)
//			break;*/
//		//if (a == 5)
//		//	continue;//跳过本次循环continue后面的代码
//		printf("%d ", a);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//数组是通过下标开0始的
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;

//int main()
//{
//	//判断部分的省略 - 判断部分恒为真，所以导致死循环
//	for (; ; )
//	{
//		printf("hehe ");
//	}
//	return 0;
//}

//int main() 
//{
//	int i = 0;
//	int j = 0;
//	for (; i<3; i++)//不要省略
//	{
//		for (; j < 3; j++)//不要省略
//		{
//			printf("hehe ");
//		}
//
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//k = 0为假，所以不循环
    //for (i = 0, k = 0; k == 0; i++, k++)//k == 0判断，所以循环

		printf("%d\n",k);
		k++;
	return 0;
}