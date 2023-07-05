#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Initboard(int board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(int board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");


		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}

}


void Playermove(int board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("玩家下棋:>");
	scanf("%d %d", &x, &y);

	while (1)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已被占用，请重新下棋\n");
			}
		}
		else
		{
			printf("坐标非法访问，请重新输入\n");
		}
	}


}

void Computermove(int board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");

	int x = rand() % row; 
	int y = rand() % col;
	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	
}

//满了返回1
//不满返回0
int Isfull(int board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}

	return 1;
}

char Iswin(int board[ROW][COL], int row, int col)
{
	//判断行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	//判断列
	int j = 0;
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
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}


	//判断平局
	if (Isfull(board,ROW,COL))
	{
		return 'B';
	}
	else
	{
		return 'C';
	}
}
