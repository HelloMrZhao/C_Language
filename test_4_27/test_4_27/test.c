#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20}, 
//		                       {9802,"wang",19},
//		                       {9803,"zhao",18}
//	};
//	fun(students + 1);  //wang
//	return 0;
//}

//����ˮ���⣺
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ(���ʵ��).
int main()
{
	int n = 0;
	int m = 0;
	int num = 0;
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		m = n + n / 2;		
	}
	else
	{
		m = n+ (n-1) / 2;
	}
	printf("%d\n", m);
	return 0;
}