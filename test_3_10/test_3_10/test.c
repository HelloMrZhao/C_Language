#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//forѭ��
//for(���ʽ1�����ʽ2�����ʽ3��
//{ѭ����䣻}
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		/*if (a == 5)
//			break;*/
//		//if (a == 5)
//		//	continue;//��������ѭ��continue����Ĵ���
//		printf("%d ", a);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//������ͨ���±꿪0ʼ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;

//int main()
//{
//	//�жϲ��ֵ�ʡ�� - �жϲ��ֺ�Ϊ�棬���Ե�����ѭ��
//	for (; ; )
//	{
//		printf("hehe ");
//	}
//	return 0;
//}

//int main() 
//{
//	int i = 0;
//	int j = 0;
//	for (; i<3; i++)//��Ҫʡ��
//	{
//		for (; j < 3; j++)//��Ҫʡ��
//		{
//			printf("hehe ");
//		}
//
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//k = 0Ϊ�٣����Բ�ѭ��
    //for (i = 0, k = 0; k == 0; i++, k++)//k == 0�жϣ�����ѭ��

		printf("%d\n",k);
		k++;
	return 0;
}