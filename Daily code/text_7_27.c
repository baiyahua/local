#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("****** 1.Add   2.Sub  ****\n");
//	printf("****** 3.Mul   4.Div  ****\n");
//	printf("******     0.Exit     ****\n");
//
//}
//
//void Calc(int (*p)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数:>");
//	scanf("%d %d", &a, &b);
//	c = p(a, b);
//	printf("%d\n", c);
//}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		default:
//			printf("输入非法，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	
//}
//#include<stdlib.h>
//int compar(const void* p1, const void* p2)
//{
//	return (*((int*)p1) - *((int*)p2));
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 10,9.8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	排序
//	bubble_sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), compar);
//	打印
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int compar(const void* p1, const void* p2)
//{
//	return (*((int*)p1) - *((int*)p2));
//}

void my_qsort(void* base, int num, int size, int (*compar)(void* p1, void* p2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < num - 1; i++)
	{
		int flag = 1;

		for (j = 0; j < num - 1 - i; j++)
		{
			if (compar((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				int a = 0;
				for (a = 0; a < size; a++)
				{
					char tmp = *((char*)base + j * size + a);
					*((char*)base + j * size + a) = *((char*)base + (j + 1) * size + a);
					*((char*)base + (j + 1) * size + a) = tmp;
					flag = 0;
				}
			}
		}

		if (flag == 1)
		{
			break;
		}
	}

}
#include<stdlib.h>


#include<string.h>
struct Stu
{
	char name[20];
	int age;
};

int compar_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}

#include<stdio.h>
int main()
{
	struct Stu s[] = { {"zhangsan",30},{"lisi",20},"wangwu",10 };
	int sz = sizeof(s) / sizeof(s[0]);
	my_qsort(s, sz, sizeof(s[0]), compar_by_name);
	return 0;
}
//int main()
//{
//	int arr[] = { 10,9.8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序
//	//bubble_sort(arr, sz);
//	//qsort(arr, sz, sizeof(arr[0]), compar);
//	my_qsort(arr, sz, sizeof(arr[0]), compar);
//	//打印
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}