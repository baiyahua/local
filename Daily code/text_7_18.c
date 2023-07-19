#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void OddEven(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 != 0))
		{
			left++;
		}

		while ((left < right) && (arr[right] % 2 != 1))
		{
			right--;
		}

		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}

	OddEven(arr,sz);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}