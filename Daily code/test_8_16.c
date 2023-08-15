#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//
//	//操作文件
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//...
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	写文件
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//
//	关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//读文件
//	int i = 0;
//	while ((i = fgetc(pf)) != EOF)
//	{
//		printf("%c ", i);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//写一行数据
//	fputs("hello world", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//读一行数据
//	char arr[20] = { 0 };
//	fgets(arr, 6, pf);
//	printf("%s\n", arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = { "zhangsan",20,80.1f };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	fprintf(pf, "%s %d %.2f", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct Stu s = { 0 };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}

	fscanf(pf, "%s %d %.2f", s.name, &(s.age), &(s.score));
	printf("%s %d %.2f", s.name, s.age, s.score);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}