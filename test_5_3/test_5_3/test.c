#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//��ӡ�������
//         1
//        1  1
//       1  2  1
//      1 3   3 1
//     1 4  6  4 1 
//   ...............
//


//1
//1  1
//1  2  1
//1  3  3 1
//1  4  6 4 1 
//...............
//


//�޸����������
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (j == i)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//������
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//������4���ӷ��Ĺ��ʣ�
//A˵��������    killer!='a'  //�жϱ��ʽ�����������Ϊ1������Ǽٽ��Ϊ0
//B˵����C       killer =='c'
//C˵����D       killer == 'd'
//D˵��C�ں�˵    killer != 'd'
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

int main()
{
	int killer = 0;
	//a b c d
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if (((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')) == 3)
			printf("%c\n", killer);
	}
	return 0;
}

