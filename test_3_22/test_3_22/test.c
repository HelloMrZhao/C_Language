#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//�����ݹ�2��
//2.��д��������������ʱ���������ַ����ĳ��ȡ�
#include <string.h>
//int my_strlen(char* str)
//{
////	//��ͨ������
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////
////	}
////	return count;
//	//�ݹ������������»�С����
//	//my_strlen("bit");
//	//1 + my_strlen;
//	//1 + 1 + my_strlem("it");
//	//1 + 1 + 1 + my_strlem("t");
//	//1 + 1 + 1 + my_strlem(" ");
//	//1+1+1+0 = 3;
//
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1); //�ݹ�
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//['b'] ['i'] ['t'] ['\n']
//	//
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//�ݹ��������
//��n�Ľ׳˲����������
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//
//	}
//	else	
//	return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	//int ret = 1;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	//����������
//	//for (i = 1; i <= n; i++) //ѭ����һ�ֵ���
//	//{
//	//	ret = ret * i;
//	//}
//	printf("%d\n", ret);
//	return 0;
//} 
//��һЩ���ܿ���ʹ�õ����ķ���дҲ����ʹ�õݹ�

//���n��쳲�����������������һ����
//1 1 2 3 5 8 13 21 55
//쳲�����������ǰ������֮�͵��ڵ�����
//int count = 0;
////�ݹ������⣬����Ч��̫�͡�
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}


//1 1 2  3  5  8 13 21  34 55 ....
//a b c  
//c = a + b;


int  Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{ 
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

//�о���ŵ������
//������- ���������� 
//���ڽ��������������ͷ��ҵ

//�о�������̨������ - 쳲�����������
