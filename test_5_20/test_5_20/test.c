#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////������ָ������ת��Ϊ����ָ�����ͣ�ֵ���䵫���ͷ����˱仯
//int main()
//{
//	
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1)); //2 �� 5
//	return 0;
//}




//�ṹ��Ĵ�С��20���ֽ�
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
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