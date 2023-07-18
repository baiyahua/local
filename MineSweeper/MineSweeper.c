#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game()
{
	char MineBoard[ROWS][COLS] = { 0 };
	char ShowBoard[ROWS][COLS] = { 0 };

	InitBoard(MineBoard,ROWS,COLS,'0');
	InitBoard(ShowBoard, ROWS, COLS, '*');

	PrintBoard(ShowBoard, ROW, COL);

	SetMine(MineBoard, ROW, COL, MINE);

	FindMine(MineBoard, ShowBoard, ROW, COL);

}

void menu()
{
	printf("****************************\n");
	printf("*****       1.Play     *****\n");
	printf("*****       0.Exit     *****\n");
	printf("****************************\n");
}


int main()
{
	srand((unsigned)time(NULL));
	int input = 0;

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ���˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}