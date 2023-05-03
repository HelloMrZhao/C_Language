#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//打印杨辉三角
//         1
//        1  1
//       1  2  1
//      1 3   3 1
//     1 4  6  4 1 
//   ...............
//


//1
//1  1
//1  2  1
//1  3  3 1
//1  4  6 4 1 
//...............
//


//修改杨辉三角形
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (j == i)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//找凶手
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下是4个嫌犯的供词：
//A说：不是我    killer!='a'  //判断表达式，如果是真结果为1，如果是假结果为0
//B说：是C       killer =='c'
//C说：是D       killer == 'd'
//D说：C在胡说    killer != 'd'
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

int main()
{
	int killer = 0;
	//a b c d
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if (((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')) == 3)
			printf("%c\n", killer);
	}
	return 0;
}

