#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("file:%s\n", __FILE__);
//	printf("line:%d\n", __LINE__);
//	printf("date:%s\n", __DATE__);
//	printf("time:%s\n", __TIME__);
//	//printf("%d\n", __STDC__);
//	return 0;
//}


//int main()
//{
//	char* p = "hello ""bit";
//	printf("hello ""bit\n");
//	printf("%s\n", p);
//
//	return 0;
//}

//#define PRINT(FORMAT,VALUE) printf("the value is "FORMAT"",VALUE)
//int main()
//{
//	PRINT("%d\n", 10);
//	PRINT("%.2f\n", 10.2);
//
//	return 0;
//}

//#define PRINT(FORMAT,VALUE) printf("the value of "#VALUE" is "FORMAT"",VALUE)
//int main()
//{
//	int i = 1;
//	PRINT("%d", i + 3);
//
//	return 0;
//}


#define PRINT(FORMAT,VALUE) printf("the value of "#VALUE" is "FORMAT"",VALUE)
int main()
{
	int i = 1;
	PRINT("%d", i + 3);

	return 0;
}
