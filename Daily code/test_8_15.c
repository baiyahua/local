#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	int* ptr = (int*)realloc(p, 48);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	for (i = 0; i < 12; i++)
//	{
//		*(p + i) = i;
//	}
//	
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(5, 4);
//	if (p = NULL)
//	{
//		printf("%s\n", strerror(errno));
//
//	}
//	//...
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(INT_MAX);
//	*p = 20;
//	free(p);
//}

//void test2()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//}

//void test3()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);
//	p = NULL;
//}

//void test4()
//{
//	int* p = (int*)malloc(40);
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)
//	{
//		return;
//	}
//	free(p);
//	p = NULL;
//}

int* test5()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return p;
	}
	//...
	return p;
}
int main()
{
	//test1();
	//test2();

	//int i = 2;
	//int* p = &i;
	//free(p);

	//test3();

	//int* p = (int*)malloc(40);
	////...
	//free(p);
	////...
	//free(p);

	//test4();
	int* ret = test5();
	return 0;
}

