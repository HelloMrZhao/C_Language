#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
//ɨ����Ϸ
// 1.��Ҫ������ά���飬һ���������ú��׵���Ϣ
// char mine[9][9];
// '1' - ��
// ��0�� - ����
// char mine[11][11];

// 2.��һ���������ú��׵���Ϣ
// char show[9][9];
// *         -δ�Ų�
// �����ַ�    - ���Ų�
// char show[11][11];


//1.������ 
//2.ɨ��
//��������
//���׾ͱ�ը����Ϸ����
//������--���������������Χ8���������ܹ��ж��ٸ��ס�

//ֱ�������з��׵�λ�ö��ҳ�������Ϸ������ɨ�׳ɹ���
void menu()
{
	printf("********************************\n");
	printf("**********  1.play   ***********\n");
	printf("**********  0.exit   ***********\n");
	printf("********************************\n");

}
void game()
{
	//ɨ����Ϸ��ʵ��
	int ret = 0;
	//�������飺
	//mine������������Ų��úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 }; //'0'
	//show������������Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//'*'

	//��ʼ������
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*'); 

	//������
	set_mine(mine, ROW, COL);
	show_board(show, ROW, COL);
	//show_board(mine, ROW, COL);
	// 
	//�Ų���
	find_mine(mine, show, ROW, COL);

}

void text()
{
	int input = 0;
	do
	{
		menu();
		printf("��������ţ�\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ����ţ�\n");
		}
	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL)); //srand�������������������㣬��time�����ķ���ֵ��time�����᷵��һ��ʱ����������ʱ�����Ϊ��������������
	//ԭ��time�������صı�����һ��time\t��һ��ֵ�����time\t��һ��ֵ���͸�srandҪ�Ĳ�һ����srand�������Ҫ����һ��unsinged��һ��ֵ����unsigned intǿ������ת��
	text();
	return 0;
}


//������չ��
//1.���Գ���ʵ�ֱ����
//2.չ��һƬ:
//1>�����겻����
//2>�жϸ�����8�������ǲ�����
//3>������δ���Ų��