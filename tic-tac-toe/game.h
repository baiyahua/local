#pragma once
#include<stdio.h>

#include<stdlib.h>

#include<time.h>

#define ROW 3
#define COL 3

//��ʼ������
void Initboard(int board[ROW][COL], int row, int col);

//��ӡ����
void Displayboard(int board[ROW][COL], int row, int col);

//����ƶ�
void Playermove(int board[ROW][COL], int row, int col);

//�����ƶ�
void Computermove(int board[ROW][COL], int row, int col);

//�ж���Ӯ
//���Ӯ������*
//����Ӯ������#
//ƽ�֣�����B
//����������C
char Iswin(int board[ROW][COL], int row, int col);
