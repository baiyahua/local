#pragma once
#include<stdio.h>

#include<stdlib.h>

#include<time.h>

#define ROW 3
#define COL 3

//初始化棋盘
void Initboard(int board[ROW][COL], int row, int col);

//打印棋盘
void Displayboard(int board[ROW][COL], int row, int col);

//玩家移动
void Playermove(int board[ROW][COL], int row, int col);

//电脑移动
void Computermove(int board[ROW][COL], int row, int col);

//判断输赢
//玩家赢，返回*
//电脑赢，返回#
//平局，返回B
//继续，返回C
char Iswin(int board[ROW][COL], int row, int col);
