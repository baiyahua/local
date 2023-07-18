#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MINE 10


//��ʼ������
void InitBoard(char board[ROWS][COLS], int row, int col,char ch);

//��ӡ����
void PrintBoard(char board[ROWS][COLS], int row, int col);

//������
void SetMine(char board[ROWS][COLS], int row, int col,int mine);

//����
void FindMine(char MineBoard[ROWS][COLS], char ShowBoard[ROWS][COLS],int row,int col);

//������Χ�׵ĸ���
int Count_Mine(char MineBoard[ROWS][COLS], int x, int y);