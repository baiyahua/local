#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int step(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return step(n - 1) + step(n - 2);
//	}
//}

//int max(int arr[],int n)
//{
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > arr[0])
//		{
//			max = arr[i];
//		}
//	}
//
//	return max;
//}
//
//int min(int arr[], int n)
//{
//	int min = arr[0];
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] < arr[0])
//		{
//			min = arr[i];
//		}
//	}
//
//	return min;
//}
#include<ctype.h>

int main()
{
	/*int n = 0;
	scanf("%d", &n);
	int set = step(n);
	printf("%d", set);*/

	//int n = 0;
	//int arr[50] = { 0 };
	//int i = 0;
	//int j = 0;
	//int del = 0;

	//scanf("%d", &n);
	//for (i = 0; i < n; i++)
	//{
	//	scanf("%d ", &arr[i]);
	//}

	//scanf("%d", &del);

	//for (i = 0; i < n; i++)
	//{
	//	if (arr[i] != del)
	//	{
	//		/*printf("%d ", arr[i]);*/
	//		arr[j++] = arr[i];
	//	}
	//}

	//for (i = 0; i < j; i++)
	//{
	//	printf("%d ", arr[i]);
	//}


	/*int n = 0;
	int arr[20] = { 0 };
	scanf("%d", &n);

	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
	}

	int Max = max(arr,n);
	int Min = min(arr,n);

	printf("%d", Max - Min);*/

	/*int n = 0;
	scanf("%d", &n);
	int arr[10] = { 0 };
	int max = 0;
	int min = 100;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("%d", max - min);*/



	/*char ch = 0;
	while(scanf("%c", &ch)==1)
	{
		if (islower(ch)|| isupper(ch))
		{
			printf("%c is an alphabet\n");

		} 
		else
		{
			printf("%c is not an alphabet\n");
		}

		getchar();
	}*/
	
	/*int i = 0;
	int max = 0;
	int score = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &score);
		if (score > max)
		{
			max = score;
		}
	}
	printf("%d", max);*/

	int i = 0;
	int j = 0;
	for (j = 10000; j < 100000; j++)
	{
		int sum = 0;

		for (i = 1; i <= 4; i++)
		{
			int k = pow(10, i);
			sum += (j / k) * (j % k);
		}
		if (sum == j)
		{
			printf("%d ", j);
		}
	}

	return 0;
}