#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int compar(const char* p1, const char* p2)
//{
//	if (*p1 - *p2 > 0)
//	{
//		return 1;
//	}
//	else if (*p1 - *p2 == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//}

void Swap(char* buf1, char* buf2,int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void my_qsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < num-1; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			if (compar((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				Swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
			}
		}
	}
}

struct Stu
{
	char name[20];
	int age;
};

//int compar_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}

int compar_by_age(const void* p1, const void* p2)
{
	return (((struct Stu*)p1)->age - ((struct Stu*)p2)->age);
}

int main()
{
	/*int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr,sz,sizeof(arr[0]),compar);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}*/

	struct Stu s[] = { {"zhangsan",30},{"lisi",20},{"baiyahua",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	//my_qsort(s, sz, sizeof(s[0]), compar_by_name);
	my_qsort(s, sz, sizeof(s[0]), compar_by_age);

	return 0;
}