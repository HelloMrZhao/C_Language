#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int count = 0;
//	int i = 3;
//	while (i > 2)
//	{
//		i = i - 1;
//		count++;
//	}
//	printf("i=%d\n", i);
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break; //跳出一个循环体或者完全结束一个循环
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;  //跳过本次循环体中剩下尚未执行的语句，立即进行下一次的循环条件判定
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//1.编写1 - 100的所有整数中出现多少个数字9
//个位为9：9  19 29 39.... 99
//十位为9：91 92 93 .......99

//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			num++;
//		}
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			num++;
//		}
//	}	
//	printf("\n%d\n", num);
//	return 0;
//}


//2.计算1/1-1/2+1/3-1/4+1/5....+1/99-1/100的值，打印出结果
//方法一：
//int main()
//{
//	int i = 0;
//	int j = 0;
//	double num1 = 0.0;
//	double num2 = 0.0;
//	double num3 = 0.0;
//
//	for (i = 1; i <= 100; i++)//奇数
//	{
//		if (i % 2 == 1)
//		{
//		
//			num1 += 1.0 / i;
//
//		}
//		if (i % 2 == 0)//偶数 
//		{
//		
//			num2 += 1.0 / i;
//		}
//		
//	}
//	num3 = num1 - num2;
//	printf("%lf ", num1);
//	printf("%lf ", num1);
//	printf("%lf ", num1); 
//	printf("\n%lf ", num3);
//	return 0;
//}

//方法二：
//int main()
//{
//	int i = 0;
//    double num = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)//奇数
//	{
//		num += flag * 1.0 / i;
//		flag = -flag; //正负1转换
//	}
//
//	printf("%lf ", num);
//	return 0;
//}

//3.求10个整数中最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//} 

//4.在屏幕上输出9*9乘法口诀表
int  main()
{
	int i = 0;
	//行数
	for (i = 1; i <= 9; i++)
	{
		//打印行数
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//%-2d每位输出结果打印两位不够的话用空格填充左对齐，%2d右对齐，每位输出结果打印两位
		}
		printf("\n");
	}
	return 0;
}

//5.//函数设计应该追求高内聚低耦合，高内聚意思是所有功能都集成在其内部，自己完善自己的功能要够的独立，低耦合就是和其它函数没有太大关系，这样方便其它地方的调用。
//尽量不使用全局变量
//函数参数设计时参数不宜过多
//设计函数，尽量做到谁申请的资源由谁释放。
//库函数的使用必须要包含对应的头文件
//函数中的形式参数