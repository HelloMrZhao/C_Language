#pragma once

#define ROW  3
#define COL  3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ���� 
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void Player_move(char board[ROW][COL], int row, int col);
//��������
void Computer_move(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char is_win(char board[ROW][COL], int row, int col);






