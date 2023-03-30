#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
#include <stdlib.h>
//初始化数组为空格
void init_board(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

//打印棋盘
void show_board(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("\n");
	printf("-----------  扫雷 ------------\n");

	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//打印数据
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{

			printf("%c ", arr[i][j]); 


		}
		printf("\n");		
	}
	printf("-----------  扫雷 ------------\n");

}


//布置雷

void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
			x = rand() % row + 1;//0~8产生随机值，rand这个函数在生成随机数时是不够随机的，所以在使用rand之前需要调用一个srand
			y = rand() % col + 1;
			if (mine[x][y] == '0')
			{
				mine[x][y] = '1';//布置雷
				count--;
			}
	}
	

}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] + 
		mine[x + 1][y] + 
		mine[x + 1][y + 1] + 
		mine[x][y + 1] + 
		mine[x - 1][y + 1] - 8*'0';
}
//玩家排雷
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//玩家输入-站在 玩家的角度思考，数组是从1开始的
	int x = 0;
	int y = 0; 
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入要排查的坐标：>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，被炸死了\n");
				show_board(mine, ROW, COL);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//字符‘0’的作用是把 数字转换成对应的字符
				show_board(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标超出范围，请重新输入：\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		show_board(show, ROW, COL);
	}
}
