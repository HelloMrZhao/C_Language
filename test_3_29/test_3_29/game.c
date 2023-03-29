#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//
void InitBoard(char board[ROW][COL], int row, int col)
{
	//先初始化棋盘
	int i = 0;
	for (i = 0; i < row; i++)//行
	{
		int j = 0;
		for (j = 0; j < col; j++)//列
		{
			board[i][j] = ' ';
		}
	}
}
//
////打印棋盘
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
////		//打印数据
////			//if (i < col - 1)
////				printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
////				//printf("\n");
////			//打印分割的行
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
		//打印数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");

		}
		printf("\n");
		//打印分割的行
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
	printf("玩家下棋\n");

	while (1)
	{
		printf("请输入坐标：>");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			//下棋
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;

			}
			else
			{
				printf("该坐标被占用，请重新输入\n");
			}

		}
		else
		{
			printf("坐标超出范围,请重新输入\n");
		}
	}

}


//电脑下棋
void Computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋：>\n");
	while (1)
	{
		x = rand() % row;//0~2 //rand()函数产生随机值
		y = rand() % col;//0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}


static int is_full(char board[ROW][COL], int row, int col)//加入static后is_full只能在这个源文件中使用，其它源文件中使用不了
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没满
			}
		}
	}
	return 1;//棋盘满了
}

//判断输赢
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	int j = 0;
	//判断列
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//判断对角线 
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}

	//继续
	return 'c';
}