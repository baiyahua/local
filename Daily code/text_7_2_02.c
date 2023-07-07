#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算行数
	printf("%d\n", sizeof(arr[0])/sizeof(arr[0][0]));//计算列数

	return 0;
}