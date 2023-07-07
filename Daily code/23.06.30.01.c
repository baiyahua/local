#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_strlen(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + my_strlen(arr + 1);
	}
	else
	{
		return 0;
	}
}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}

int main(void)
{
	/*unsigned int n = 0;
	scanf("%d", &n);
	print(n);*/
	char arr[] = "abc";
	int m = my_strlen(arr);
	printf("%d", m);

	return 0;
}