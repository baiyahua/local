#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	srand((unsigned)time(NULL));

	int a = rand() % 100;
	int num = 0;

	printf("�������:>");
	while (1)
	{
		scanf("%d", &num);
		if (num == a)
		{
			printf("�¶���\n");
			system("shutdown -a");
			printf("����ֹ�ػ�\n");
			break;
		}
		else if (num > a)
		{
			printf("�´��ˣ����ز�:>");
		}
		else if (num < a)
		{
			printf("��С�ˣ����ز�:>");
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
	printf("��ѡ��:>");
	scanf("%d", &n);
	if (n == 2)
	{
		printf("��Ϸ���˳�\n");
	}
	else if (n == 1)
	{
		game();
	}
	else
	{
		printf("ѡ�����������ѡ��\n");
		goto again;
	}

	return 0;
}