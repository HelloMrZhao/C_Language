#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//
void InitBoard(char board[ROW][COL], int row, int col)
{
	//�ȳ�ʼ������
	int i = 0;
	for (i = 0; i < row; i++)//��
	{
		int j = 0;
		for (j = 0; j < col; j++)//��
		{
			board[i][j] = ' ';
		}
	}
}
//
////��ӡ����
////void DisplayBoard(char board[ROW][COL], int row, int col)
////{
////	int i = 0;
////	for (i = 0; i < row; i++)
////	{
////		int j = 0;
////		for (j = 0; j < col; j++)
////		{
////			if(j < col - 1)
////			printf("%c",board[i][j]);
////		}
////		printf("\n");
////	}
////}
//
////void DisplayBoard(char board[ROW][COL], int row, int col)
////{
////	int i = 0;
////	for (i = 0; i < row; i++)
////	{
////		//��ӡ����
////			//if (i < col - 1)
////				printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
////				//printf("\n");
////			//��ӡ�ָ����
////			if (i < col - 1)
////				printf("---|---|---\n");
////			//printf("\n");
////	}
////}



void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");

		}
		printf("\n");
		//��ӡ�ָ����
		if (i < col - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");

		}
	}
}



void Player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������\n");

	while (1)
	{
		printf("���������꣺>");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			//����
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;

			}
			else
			{
				printf("�����걻ռ�ã�����������\n");
			}

		}
		else
		{
			printf("���곬����Χ,����������\n");
		}
	}

}


//��������
void Computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������壺>\n");
	while (1)
	{
		x = rand() % row;//0~2 //rand()�����������ֵ
		y = rand() % col;//0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}


static int is_full(char board[ROW][COL], int row, int col)//����static��is_fullֻ�������Դ�ļ���ʹ�ã�����Դ�ļ���ʹ�ò���
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//����û��
			}
		}
	}
	return 1;//��������
}

//�ж���Ӯ
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж���
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	int j = 0;
	//�ж���
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//�ж϶Խ��� 
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж�ƽ��
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}

	//����
	return 'c';
}