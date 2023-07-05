#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game(void)
{
	char ret = 0;
	int board[ROW][COL] = { 0 };

	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);

	while (1)
	{
		Playermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL);

		Computermove(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL);
	}

	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else if (ret == 'B')
	{
		printf("平局\n");
	}

	Displayboard(board, ROW, COL);

}


void menu(void)
{
	printf("********************************\n");
	printf("****          1.Play    ********\n");
	printf("****          0.Exit    ********\n");
	printf("********************************\n");
}

int main()
{
	srand((unsigned)time(NULL));

	int n = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (n);

	return 0;
}