#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//-128
//	//10000000 00000000 00000000 10000000 原码
//	//11111111 11111111 11111111 10000000 补码
//	//截断
//	//10000000 -- a
//	//% u是按照无符号形式打印的
//	//整型提升 -高位补符号位
//	//11111111 11111111 11111111 10000000
//
//	//%u打印无符号数，所以就打印出11111111 11111111 11111111 10000000
//	//
//	printf("%u\n", a);
//	//4，294，967，168
//	return 0;
//} 

//int main()
//{
//	char a = 128;
//	//有符号char类型的取值范围是-128~127
//	//128
//	//00000000 00000000 00000000 10000000 原码
//	//00000000 00000000 00000000 10000000 补码
//	//截断
//	//10000000 -- a
//	//% u是按照无符号形式打印的
//	//整型提升 -高位补符号位
//	//11111111 11111111 11111111 10000000
//
//	//%u打印无符号数，所以就打印出11111111 11111111 11111111 10000000
//	//
//	printf("%u\n", a);
//	//4，294，967，168
//	return 0;
//}


//int main()
//{
//	int i = -20;
//	//原码：10000000 00000000 00000000 00010100
//	//补码：11111111 11111111 11111111 11101100 ~ -20
//	unsigned int j = 10;
//	//原码：00000000 00000000 00000000 00001010
//	//反码：00000000 00000000 00000000 00001010 ~ 10
//
//	printf("%d\n", i + j); //-10
//	return 0;
//} 

#include <windows.h>
int main()
{
	unsigned int i;
	
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		Sleep(1000);
	}

	return 0;
}

 