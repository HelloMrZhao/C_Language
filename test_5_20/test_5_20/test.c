#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////把数组指针类型转换为整型指针类型，值不变但类型发生了变化
//int main()
//{
//	
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1)); //2 ， 5
//	return 0;
//}




//结构体的大小是20个字节
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
int main()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	//00000014
    //00000001
    //00000004
	return 0;
}