#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.С�����ŵ��ݣ�����ǰ����n�����ڵȵ��ݣ�����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4����(��2���ӣ���2����),����С���ּ��㻹��Ҫ���ٷ��Ӳ��� �˵��ݵ���¥�ϡ�(������������1��)
//int main()
//{
//	int   n = 0;
//	scanf("%d", &n);
//	printf("%d\n", (n / 12)*4 + 2);
//	return 0;
//}



//2.ʵ����ĸ�Ĵ�Сдת���������������
//�����������������룬ÿһ�������д��ĸ��
//������������ÿ�����������Ӧ��Сд��ĸ��
//��ע���������������Ҫע�⡰�س���Ҳ����ĸ������Ҫ�����ա�(getchar())������ĸ�� 

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //EOF�൱����\n
//	{
//		getchar();//���������⣬ȥ��\n
//
//		if (ch >= 'A' && ch <= 'Z')
//		{ 
//			ch+=32;
//		}
//		printf("%c\n", ch);
//	}
//	//putchar(ch); //putchar����ӡһ���ַ� 
//	return 0;
//}
////���ó�������Ͱ�ctrl + z;��Ϊ��ctrl + z�ʹ���getchar(),����һ��EOF


//3.�ܰѺ������������������ݷ��ظ���������
//����һ���β�������
//void test(int arr[])
//{
//	int x = 4;
//	int y = 5;
//	arr[0] = x;
//	arr[1] = y;
//}
//int main()
//{
//	int arr[] = { 1,2,3 };
//	test(arr);
//	//printf("%d\n",test());
//
//	return 0;
//}
//���������β�������ָ��
//void test(int*pa,int*pb)
//{
//	int x = 10;
//	int b = 20;
//	*pa = 10;
//	*pb = 20;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	return 0;
//}

//��������������ȫ�ֱ���

//int g_a = 0;
//int g_b = 0;
//void test()
//{
//	int x = 10;
//	int y = 20;
//	g_a = x;
//	g_b = y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test();
//	a = g_a; 
//	b = g_b;
//	return 0;
//}


//4.дһ����������ӡ�˷��ھ���
//void Multiply(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//
//		}
//		printf("\n"); 
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Multiply(n);
//	return 0;
//}

//5.�ݹ�--�ݹ�������������������������������ʱ�ݹ鲻�ټ���
//ÿ�εݹ�֮���Խ��Խ�ӽ���������������ݹ���̫������ջ���������
//int funk1(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * funk1(n + 1);
//}
//int main()
//{
//	printf("%d\n", funk1(2));
//	
//	return 0;
//}

//6.��дһ������reverse_string(str*string)(�ݹ�ʵ��)
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���磺char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba

//1.�ǵݹ鷽��һ��ָ������
//#include <string.h>
//void reverse_string(char*str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}		
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//2.�ǵݹ鷽���������±���д
//#include <string.h>
//void reverse_string(char arr[])
//{
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int len = strlen(arr);
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//�ݹ�д��
#include <string.h>
void reverse_string(char*str)
{
	int len = strlen(str);
	char tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if(strlen(str + 1) >= 2)
	reverse_string(str + 1);
	*(str + len - 1) = tmp;

}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}