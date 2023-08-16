#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = { "baiyahua",20,80.2 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	fwrite(&s, sizeof(struct Stu), 1, pf);
//
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
//	struct Stu s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	fread(&s, sizeof(struct Stu), 1, pf);
//	printf("%s %d %.2f", s.name, s.age, s.score);
//
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
//	struct Stu s = { "baiyahua",20,90.2f };
//	char buf[100] = { 0 };
//
//	sprintf(buf, "%s %d %.2f", s.name, s.age, s.score);
//	printf("%s\n", buf);
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
//	struct Stu s = { "baiyahua",20,90.2f };
//	struct Stu tmp = { 0 };
//	char buf[100] = { 0 };
//
//	sprintf(buf, "%s %d %.2f", s.name, s.age, s.score);
//	printf("%s\n", buf);
//
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %.2f", tmp.name, tmp.age, tmp.score);
//
//	return 0;
//}

//int main()
//{
//	//文件中的内容是abcdef
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	char ch = 0;
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	printf("%d\n", ftell(pf));//1
//
//	fseek(pf, 2, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//c
//	printf("%d\n", ftell(pf));//3
//
//	fseek(pf, 1, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//e
//	printf("%d\n", ftell(pf));//5
//
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//	printf("%d\n", ftell(pf));//6
//
//	return 0;
//}

int main()
{
	//文件中的内容是abcdef
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	char ch = 0;
	fseek(pf, 2, SEEK_SET);
	ch = fgetc(pf);
	printf("%c\n", ch);//c

	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);//a

	return 0;
}