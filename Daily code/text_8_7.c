#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

//void* my_memcpy(void* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*((char*)dest) = *((char*)src);
//		(char*)dest = (char*)dest + 1;
//		(char*)src = (char*)src + 1;
//	}
//	return ret;
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest > src)
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest) = *((char*)src);
//			(char*)dest = (char*)dest + 1;
//			(char*)src = (char*)src + 1;
//		}
//	}
//
//	return ret;
//}
//void reverse1(char arr[])
//{
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//void reverse2(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//	{	
//		reverse2(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}

//void left_revolve1(char* arr,int n)
//{
//	assert(arr);
//	char* ret = arr;
//	int len = strlen(arr);
//	n %= len;
//	while (n--)
//	{
//		char tmp = *ret;
//		while (len - 1)
//		{
//			*ret = *(ret + 1);
//			ret++;
//			len = len - 1;
//		}
//		*(ret + len - 1) = tmp;
//	}
//}
//void reverse3(char arr[],int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void left_revolve2(char* arr, int n)
//{
//	int len = strlen(arr);
//	reverse3(arr, n);
//	reverse3(arr + n, len - n);
//	reverse3(arr, len);
//}
struct cor
{
	int x;
	int y;
};

//struct cor matrix(int arr[3][3], int row, int col, int n,struct cor S)
//{
//	int i = 0;
//	int j = col - 1;
//
//	while (i < row && j >= 0)
//	{
//		if (n > arr[i][j])
//		{
//			i++;
//		}
//		else if (n < arr[i][j])
//		{
//			j--;
//		}
//		else
//		{
//			S.x = i;
//			S.y = j;
//			return S;
//		}
//	}
//	
//	S.x = -1;
//	S.y = -1;
//	return S;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int n = 0;
//	struct cor S = { 0 };
//	scanf("%d", &n);
//	struct cor ret = matrix(arr, 3, 3, n, S);
//	printf("x = %d,y = %d", ret.x, ret.y);
//
//	return 0;
//}

//int  matrix(int arr[3][3], int row, int col, int n, int* x, int* y)
//{
//	int i = 0;
//	int j = col - 1;
//
//	while (i < row && j >= 0)
//	{
//		if (n > arr[i][j])
//		{
//			i++;
//		}
//		else if (n < arr[i][j])
//		{
//			j--;
//		}
//		else
//		{
//			*x = i;
//			*y = j;
//			return 1;
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int n = 0;
//	int x = 0;
//	int y = 0;
//	while (scanf("%d", &n))
//	{
//		int ret = matrix(arr, 3, 3, n, &x, &y);
//		if (ret == 1)
//		{
//			printf("x = %d,y = %d\n", x, y);
//		}
//		else
//		{
//			printf("not find\n");
//		}
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[30][30];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		int t = 0;
//		for (t = 0; t < n - i; t++)
//		{
//			printf(" ");
//		}
//		
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20][20] = { 0 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i + j >= 3)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int flag1 = 1;//ÉýÐò
	int flag2 = 1;//½µÐò
	int arr[50] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//ÅÐ¶ÏÊÇ²»ÊÇÉýÐò
	for (i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			flag1 = 0;
			break;
		}
	}
	//ÅÐ¶ÏÊÇ²»ÊÇ½µÐò
	for (i = 0; i < n - 1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			flag2 = 0;
			break;
		}
	}

	if (flag1 + flag2 >= 1)
	{
		printf("sorted\n");
	}
	else
	{
		printf("unsorted\n");
	}
	return 0;
}