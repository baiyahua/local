#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

//void reverse_string(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

int main()
{
	/*char arr[10001] = { 0 };
	gets(arr);
	int left = 0;
	int right = strlen(arr) - 1;
	while (left<right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	printf("%s\n", arr);*/

	/*int i = 0;
	int a = 0;
	int n = 0;
	int ret = 0;
	int sum = 0;
	scanf("%d %d", &a, &n);
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}

	printf("%d", sum);*/


	//int i = 0;
	//for (i = 0; i <= 100000; i++)
	//{
	//	int temp = i;
	//	int n = 1;
	//	int sum = 0;

	//	while (temp / 10)
	//	{
	//		n++;
	//		temp /= 10;
	//	}

	//	temp = i;

	//	while (temp)
	//	{
	//		int num = temp % 10;
	//		sum += pow(num, n);
	//		temp /= 10;
	//	}
	//	
	//	if (sum == i)
	//	{
	//		printf("%d ", i);
	//	}
	//}

	//int line = 0;
	//scanf("%d", &line);

	////打印上面
	//int i = 0;
	//for (i = 0; i < line; i++)
	//{
	//	int j = 0;

	//	for (j = 0; j < line - 1  - i; j++)
	//	{
	//		printf(" ");
	//	}

	//	for (j = 0; j < 2 * i + 1; j++)
	//	{
	//		printf("*");
	//	}

	//	printf("\n");
	//}

	////打印下面
	//for (i = 0; i < line - 1; i++)
	//{
	//	int j = 0;

	//	for (j = 0; j < 1 + i; j++)
	//	{
	//		printf(" ");
	//	}

	//	for (j = 0; j < 2 * line - 3 - 2*i; j++)
	//	{
	//		printf("*");
	//	} 

	//	printf("\n");
	//}

	/*int money = 0;
	scanf("%d",&money);
	int total = money;
	int empty = money;

	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", total);*/

	/*int arr[101] = { 0 };
	gets(arr);
	int sz = strlen(arr);
	reverse_string(arr,sz);
	printf("%s\n", arr);*/

	char arr[101] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);

	char* start = arr;
	char* end = start;
	while (*end)
	{
		while (*end != ' '&& *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);

		if (*end != '\0')
		{
			end++;
		}

		start = end;
	}

	printf("%s\n", arr);

	return 0;
}