#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

void menu()
{
	printf("****************************\n");
	printf("****   1.Add   2.Del   *****\n");
	printf("****   3.Sch   4.Sort  *****\n");
	printf("****   5.Show  6.Modify*****\n");
	printf("****   0.Exit           *****\n");
	printf("****************************\n");
}
int main()
{

	int input = 0;
	Con con;
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:AddContact(&con);
			break;
		case 2:DelContact(&con);
			break;
		case 3:SearchContact(&con);
			break;
		case 4:SortContact(&con);
			break;
		case 5:ShowContact(&con);
			break;
		case 6:ModifyContact(&con);
			break;
		case 0:
			DestroyContact(&con);
			printf("已退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}