#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//����һ������������1�ĸ���
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	int i = 0;
	for (i = 1; i <= 32; i++)
	{
		int b = n & 1;
		if (b == 1)
		{
			count++;
		}
		n = n >> 1;
	}
	printf("%d\n", count); 

	return 0;
}