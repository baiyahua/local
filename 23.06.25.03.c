#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%s", password);
		if (strcmp(password, "Fakernb0.0") == 0)
		{
			printf("µÇÂ¼³É¹¦\n");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó\n");
		}
	}
	if (i == 3)
	{
		printf("Èý´ÎÃÜÂë´íÎó£¬ÍË³ö³ÌÐò\n");
	}

	return 0;
}
