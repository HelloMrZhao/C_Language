#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//returnһ��ֻ�ܷ���һ������
//�βο��������飬����
//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	
//	return 0;
//}


////�βο���������ָ�룬����
//void test(int*p1, int*p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//} 


//����������ȫ�ֱ����Ѻ����������������������ظ������������ǲ�����������������
//int a = 0;
//int b = 0;
//void test()
//{
//	a = 1;
//    b = 2;
//}
//
//int main()
//{
//	test();
//  	return 0;
//}

//�������Դ�ֵ���ã���ֵ���õ�ʱ���β���ʵ�ε���ʱ����
//�������Դ�ַ���ã���ַ���õ�ʱ�򣬿���ͨ���ββ���ʵ��
//��������Ƕ�׵��õ�����Ƕ�׶���
//ʵ�κ��βο���ͬ��
//���������ͱ���������һ����ͬһ�ļ���

//�������뱣֤��������ʹ��
//�β��ں�������ʱ��ʵ�������ſ����ڴ�ռ�
//��������exec((v1,v2),(v3,v4),v5,v6);�У�ʵ�εĸ����ǣ�
// ���ű��ʽ��
//exec((v1,v2),(v3,v4),v5,v6)�Ƕ��ű��ʽ���ɶ��Ÿ����ı��ʽ���Ƕ��ű��ʽ
//���ű��ʽ������������μ��㣬���������ű��Ľ�������һ�����ʽ�Ľ��������v2�Ľ����exec(v2,v4,v5,v6)

//ʵ��һ��������ӡ�˷��ھ����˷��ھ�����������������Լ�����
//void multiply(int z)
//{
//	int x = 0;
//	for (x = 1; x <= z; x++)
//	{
//		int y = 0;
//		for (y = 1; y <= x; y++)
//		{
//			printf("%d*%d=%2d ", x, y, x * y);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	//int b = 0;
//	scanf("%d", &a);
//	multiply(a);
//	//printf("%d*%d=%2d ", a, b, a * b);
//	return 0;
//}

//���ڵݹ飺
//1.���������������������������������ʱ�򣬵ݹ鲻�ڼ���
//2.ÿ�εݹ�֮��Խ��Խ�ӽ��������
//3.�ݹ���̫������ջ�������
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int main()
//{
//	int n = 0;
//	int a = Fun(2);
//	printf("%d\n", a);
//	return 0;
//}

//�ڴ��ڼ������������Ҫ��Ϊ��������ջ������������̬��
//ջ������žֲ��������������������ú���ʱ����ֵ����ʱ�ı���
//��������̬�ڴ����
//��̬�������ȫ�ֱ�����int g_val =  0;)����̬������static int num = 0)

//�ַ�������ݹ�ʵ�֣�
//
//#include <string.h>
//#include <windows.h>//Sleep();���ߺ�����ͷ�ļ�
//void Str_test(char arr1[], char arr2[])
//{
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[right];
//		printf("%s", arr2);
//		Sleep(500);
//		right--;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = " ";
//	Str_test(arr1,  arr2);
//	return 0;
//}
// 

//��ʦ�ķǵݹ鷽��1��
//int my_strlen(char* str)//����һ���������ַ�������
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left <= right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//��ʦ�ķǵݹ鷽��2��
//int my_strlen(char* str)//����һ���������ַ�������
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left <= right)
//	{
//		//char tmp = str[left]; 
//		char tmp = *(str + left); //�ȼ���char tmp = str[left]; 
//		//str + left������str���ָ�����ƫ���ҵ���һ��Ԫ��
//		*(str + left) = str[right];
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//�õݹ鷽��ʵ�֣�
int my_strlen(char* str)//����һ���������ַ�������
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	char tmp = *str;//1
	int len = my_strlen(str);
	*str = *(str + len - 1);//2
	*(str + len - 1) = '\0'; //3
	//���ж�����
	if (my_strlen(str+1)>=2)
	{
		reverse_string(str + 1);//4,�����м�bcde�ַ���

	}
	*(str + len - 1) = tmp;//5
	
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);//fedcba
	return 0;
}