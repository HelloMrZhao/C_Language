#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
//扫雷游戏
// 1.需要两个二维数组，一个用来布置好雷的信息
// char mine[9][9];
// '1' - 雷
// ‘0’ - 非雷
// char mine[11][11];

// 2.另一个用来布置好雷的信息
// char show[9][9];
// *         -未排查
// 数组字符    - 已排查
// char show[11][11];


//1.布置雷 
//2.扫雷
//输入坐标
//是雷就被炸死游戏结束
//不是雷--告诉你这个坐标周围8个坐标上总共有多少个雷。

//直到把所有非雷的位置都找出来，游戏结束，扫雷成功。
void menu()
{
	printf("********************************\n");
	printf("**********  1.play   ***********\n");
	printf("**********  0.exit   ***********\n");
	printf("********************************\n");

}
void game()
{
	//扫雷游戏的实现
	int ret = 0;
	//创建数组：
	//mine数组是用来存放布置好的雷的信息
	char mine[ROWS][COLS] = { 0 }; //'0'
	//show数组用来存放排查出的雷的信息
	char show[ROWS][COLS] = { 0 };//'*'

	//初始化棋盘
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*'); 

	//布置雷
	set_mine(mine, ROW, COL);
	show_board(show, ROW, COL);
	//show_board(mine, ROW, COL);
	// 
	//排查雷
	find_mine(mine, show, ROW, COL);

}

void text()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入序号：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏：\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择序号：\n");
		}
	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL)); //srand叫设置随机数的生成起点，用time函数的返回值，time函数会返回一个时间戳，把这个时间戳作为随机数的生成起点
	//原本time函数返回的本来是一个time\t的一个值，这个time\t的一个值类型跟srand要的不一样，srand这个参数要的是一个unsinged的一个值所以unsigned int强制类型转换
	text();
	return 0;
}


//后期拓展：
//1.可以尝试实现标记雷
//2.展开一片:
//1>该坐标不是雷
//2>判断该坐标8个坐标是不是雷
//3>该坐标未被排查过