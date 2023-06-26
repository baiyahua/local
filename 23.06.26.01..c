#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	srand((unsigned)time(NULL));

	int a = rand() % 100;
	int num = 0;

	printf("请猜数字:>");
	while (1)
	{
		scanf("%d", &num);
		if (num == a)
		{
			printf("猜对了\n");
			system("shutdown -a");
			printf("已阻止关机\n");
			break;
		}
		else if (num > a)
		{
			printf("猜大了，请重猜:>");
		}
		else if (num < a)
		{
			printf("猜小了，请重猜:>");
		}
	}

}

int main(void)
{
	system("shutdown -s -t 60");
	printf("Your computer will shutdown in 60 seconds,winning the game can prevent it.\n");

	int n = 0;
	printf("********   1.Play   ********\n");
	printf("********   2.Exit   ********\n");
again:
	printf("请选择:>");
	scanf("%d", &n);
	if (n == 2)
	{
		printf("游戏已退出\n");
	}
	else if (n == 1)
	{
		game();
	}
	else
	{
		printf("选择错误，请重新选择\n");
		goto again;
	}

	return 0;
}