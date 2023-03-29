#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
//test.c����������������Ϸ���߼�
void menu()
{
	printf("*********************************\n");
	printf("**********   1.play!   **********\n");
	printf("**********   0.exit!   **********\n");
	printf("*********************************\n");
}

void game()
{
	char ret = 0;
	//������������
	char board[ROW][COL] = { 0 };
	//��ʼ������Ϊ�ո�
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//�������
		Player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}

		//��������
		Computer_move(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	//DisplayBoard(board, ROW, COL);
}

//ʲô�����Ϸ����
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ��   - 'Q'
//����   - 'c'
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			//��ʼ��Ϸ
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룺\n");
			break;
		}
	} while (input); //input = 0Ϊ�٣�=1Ϊ��
}
int main()
{
	test();
	return 0;
}




