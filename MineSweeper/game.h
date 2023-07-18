#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MINE 10


//初始化棋盘
void InitBoard(char board[ROWS][COLS], int row, int col,char ch);

//打印棋盘
void PrintBoard(char board[ROWS][COLS], int row, int col);

//设置雷
void SetMine(char board[ROWS][COLS], int row, int col,int mine);

//找雷
void FindMine(char MineBoard[ROWS][COLS], char ShowBoard[ROWS][COLS],int row,int col);

//坐标周围雷的个数
int Count_Mine(char MineBoard[ROWS][COLS], int x, int y);