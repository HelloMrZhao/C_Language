#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�������������������еĲ�ͬλ���м�λ
//����һ
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int diff = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			diff++;
//		}
// 	}
//	printf("%d\n", diff);
//	return 0;
//}


////��������
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int diff = 0;
//	int tmp = m ^ n;//���
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		diff++;
//	}
//	printf("%d\n", diff);
//	return 0;
//}


//��ӡ���������Ƶ�����λ��ż��λ���ֱ��ӡ������������
//000000000000000000000000000000000000000000000110
//

//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	//����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//
//	//��ӡż��λ
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}


//����һ����������ָ������ӡ�������Ԫ��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//��һ���ַ��������ݵߵ���������������磺
// I am a student
// tneduts a ma I
#include <string.h>
void print(char* p, int len)
{
	int i = 0;
	for (i = len; i >= 0; i--)
	{
		printf("%c", *(p + i));
	}
}
int main()
{
	char arr[1000] = {0};
	//gets(arr);
	//scanf("%[^\n]", arr);
	fgets(arr, 100, stdin); //fgets���Զ�ȡ�ַ��ո�stdin�Ǳ�׼����
	int len = (int)strlen(arr);
	print(arr, len);
	//printf("%d", len);
	return 0;
}