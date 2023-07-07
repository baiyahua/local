#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int binary_search(int arr[], int n, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("Plesse enter the number:>");
//	scanf("%d", &n);
//	int m = binary_search(arr, n,sz);
//	if (m == -1)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("yes,its subscript is %d", m);
//	}
//
//
//	return 0;
//}

#include<stdio.h>

void _num(int* num)
{
	(*num) += 1;
}

int main(void)
{
	/*int m = sizeof(bool);
	printf("%d", m);*/
	int num = 0;
	_num(&num);
	printf("%d", num);

	return 0;
}