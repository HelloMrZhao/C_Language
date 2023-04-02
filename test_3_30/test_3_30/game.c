#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
#include <stdlib.h>
//��ʼ������Ϊ�ո�
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

//��ӡ����
void show_board(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("\n");
	printf("-----------  ɨ�� ------------\n");

	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//��ӡ����
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{

			printf("%c ", arr[i][j]); 


		}
		printf("\n");		
	}
	printf("-----------  ɨ�� ------------\n");

}


//������

void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
			x = rand() % row + 1;//0~8�������ֵ��rand������������������ʱ�ǲ�������ģ�������ʹ��rand֮ǰ��Ҫ����һ��srand
			y = rand() % col + 1;
			if (mine[x][y] == '0')
			{
				mine[x][y] = '1';//������
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
//�������
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//�������-վ�� ��ҵĽǶ�˼���������Ǵ�1��ʼ��
	int x = 0;
	int y = 0; 
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("������Ҫ�Ų�����꣺>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�����ը����\n");
				show_board(mine, ROW, COL);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//�ַ���0���������ǰ� ����ת���ɶ�Ӧ���ַ�
				show_board(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("���곬����Χ�����������룺\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		show_board(show, ROW, COL);
	}
}