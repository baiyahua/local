#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//
//	//�����ļ�
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//...
//
//	//�ر��ļ�
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
//	д�ļ�
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//
//	�ر��ļ�
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
//	//���ļ�
//	int i = 0;
//	while ((i = fgetc(pf)) != EOF)
//	{
//		printf("%c ", i);
//	}
//
//	//�ر��ļ�
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
//	//дһ������
//	fputs("hello world", pf);
//
//	//�ر��ļ�
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
//	//��һ������
//	char arr[20] = { 0 };
//	fgets(arr, 6, pf);
//	printf("%s\n", arr);
//
//	//�ر��ļ�
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
//	//�ر��ļ�
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

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}