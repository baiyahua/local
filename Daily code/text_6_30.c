#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int Fib(int n)
//{
//	/*if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}*/
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//void Swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
int prime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			return 0;
		}
	}
	if (j > sqrt(i))
	{
		return 1;
	}
}
int main()
{
	/*int n = 0;
	scanf("%d", &n);
	int m = Fib(n);
	printf("%d", m);*/
	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		Swap(&a, &b);
	}
	if (a < c)
	{
		Swap(&a, &c);
	}
	if (b < c)
	{
		Swap(&b, &c);
	}


	printf("%d,%d,%d", a, b, c);*/

	/*int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}*/
	//最大公约数
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d %d", &a, &b);
	//int m = a * b;
	//while (c = a % b)
	//{
	//		a = b;
	//		b = c;
	//}
	//printf("%d\n", b);

	////最小公倍数
	//printf("最小公倍数是:%d",m / b);


	//打印100以内的素数
    int i = 0;
    int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d", count);
	return 0;
}