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
//	//�ж��ļ���ȡ������ԭ��
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
        //��ӡǰn��
        int i = 0;
        for (i = 0; i < n; i++)
        {
            //��ӡ�ո�
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf("  ");
            }
            //��ӡ*
            for (j = 0; j < i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        //��ӡ��n+1��
        for (i = 0; i < n + 1; i++)
        {
            //��ӡ�ո�
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf("  ");
            }
            //��ӡ*
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}