#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		ferror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	while ((a = fgetc(pf)) != EOF)
//	{
//		putchar(a);
//	}
//
//	//判断文件读取结束的原因
//	if (ferror(pf))
//	{
//		printf("I/O error when reading\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file reached successfully");
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        //打印前n行
        int i = 0;
        for (i = 0; i < n; i++)
        {
            //打印空格
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf("  ");
            }
            //打印*
            for (j = 0; j < i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        //打印后n+1行
        for (i = 0; i < n + 1; i++)
        {
            //打印空格
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf("  ");
            }
            //打印*
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}