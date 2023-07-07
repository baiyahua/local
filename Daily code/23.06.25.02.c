#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(void)
{
	char arr[] = "welcome to minecraft!!!";
	char brr[] = "***********************";

	int left = 0;
	int right = strlen(arr) - 1;

	while (left <= right)
	{
		brr[left] = arr[left];
		brr[right] = arr[right];
		printf("%s\n", brr);
		Sleep(1000);//头文件为window.h
		system("cls");//system是一个库函数，可以执行系统命令，头文件为stdlib.h
		left++;
		right--;
	}

	printf("%s\n", brr);

	return 0;
}