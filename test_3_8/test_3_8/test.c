#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//switch ���
// switch(������䣩
// {
//     ����
// }
// �������һЩcase ���ͳ������ʽ��(�ַ�Ҳ���ԣ��ַ�Ҳ��һ�����ͣ�
//                ��䣻
// case������ڣ�break��������
//switch ���Ҳ��һ�ַ�֧��䡣�������ڶ��֦����������磺
//����1���������һ
//����2��������ڶ�
//����3�����������
//����4�����������
//����5�����������
//����6�����������
//����7�����������
//���ֵĶ��֦�����if...else���ܷ���������Ҫ��switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	
//	return 0;
//}

//1 - 5 ������
//6 - 7 ��Ϣ��
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//		switch (day)
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//		case 7:
//			printf("��Ϣ��\n");
//			break;
//		default://��ִ�в�����
//			printf("input error\n");
//			break;
//		}
//
//	return 0;
//}

//��ϰ��
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n) //switch����Ƕ��ʹ�ø�
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n); //������ m = 5, n = 3
	return 0;
}