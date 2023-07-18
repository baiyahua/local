#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int row, int col,char ch)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ch;
		}
	}
}

void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	
	printf("------------ɨ��-------------\n");

	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);

		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}

		printf("\n");
	}

	printf("------------ɨ��-------------\n");

}


void SetMine(char board[ROWS][COLS], int row, int col,int mine)
{
	while (mine)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			mine--;
		}
	}
}

int Count_Mine(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int sum = 0;

	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			sum += board[x + i][y + j];
		}
	}

	return sum - 9 * '0';
}

void FindMine(char MineBoard[ROWS][COLS], char ShowBoard[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int mine = MINE;

	while (1)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (MineBoard[x][y] == '0')
			{
				mine--;
				int ret = Count_Mine(MineBoard, x, y);
				ShowBoard[x][y] = ret + '0';
				PrintBoard(ShowBoard, ROW, COL);
				if (!mine)
				{
					printf("��Ӯ��\n");
					break;
				}
			}

			else if (MineBoard[x][y] == '1')
			{
				printf("�ܱ�Ǹ���㱻ը����\n");
				break;
			}

			else if (ShowBoard[x][y] != '*')
			{
				printf("��λ���ѱ��Ų�����뻻����λ���Ų�\n");
			}

		}

		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}