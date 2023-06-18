#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体的内存对齐

struct S1
{
	char c1;//1
	int i;//4
	char c2;//1
};

struct S2
{
	char c1;//1
	char c2;//1
	int i;//4
};
int main()
{
	struct S1 s;
	struct S2 s2;
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(s2));
	return 0;
}