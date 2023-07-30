#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

//char* my_strcpy(char* dest, const char* source)
//{
//	assert(dest && source);
//	char* ret = dest;
//	while (*dest++ = *source++)
//	{
//		;
//	}
//	return ret;
//}

//char* my_strcat(char* dest, const char* source)
//{
//	assert(dest && source);
//	int ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//
//	while (*dest++ = *source++)
//	{
//		;
//	}
//
//	return ret;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		*str1++;
//		*str2++;
//	}
//
//	return *str1 - *str2;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = str1;
//	char* s2 = str2;
//	char* p = str1;
//
//	while (*p)
//	{
//		s1 = p;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return p;
//		}
//		p++;
//		s2 = str2;
//	}
//
//	return NULL;
//}

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;

	while (num--)
	{
		*(char*)dest = *(char*)src;
		(char*)dest = (char*)dest + 1;
		(char*)src = (char*)src + 1;
	}

	return ret;
}

#include<errno.h>
int main()
{
	/*char arr1[7] = { 0 };
	char arr2[] = "tassel";
	char* ret = my_strcpy(arr1, arr2);
	printf("%s", ret);*/

	/*char arr1[20] = "baiyahua";
	my_strcat(arr1, "tassel");
	printf("%s\n", arr1);*/

	/*char arr1[] = "baiyahuaabc";
	char arr2[] = "baiyahuaabd";
	int ret = my_strcmp(arr1, arr2);
	if (ret < 0)
	{
		printf("<\n");
	}
	else if (ret == 0)
	{
		printf("==\n");
	}
	else
	{
		printf(">\n");
	}*/

	/*char arr1[] = "abcdef";
	char arr2[] = "bit";
	strncpy(arr1, arr2, 4);
	printf("%s\n", arr1);*/

	//char arr1[] = "baiyahuaqq.com";
	//char arr2[] = "baiyahua";
	////char* ret = strstr(arr1, arr2);
	//char* ret = my_strstr(arr1, arr2);
	//if (ret == NULL)
	//{
	//	printf("not find\n");
	//}
	//else
	//{
	//	printf("%s\n", ret);
	//}

	/*char arr1[] = "@.";
	char arr2[] = "2714594879@qq.com";
	for (char* ret = strtok(arr2, arr1); ret != NULL;ret = strtok(NULL,arr1))
	{
		printf("%s\n", ret);
	}*/

	/*FILE* pFile = fopen("unexist.ent", "r");
	if (pFile == NULL)
	{
		printf("%s\n", strerror(errno));
	}*/

	int arr1[] = { 1,2,3,4,5,6,7,8 };
	int arr2[10] = { 0 };
	//memcpy(arr2, arr1, 20);
	my_memcpy(arr2, arr1, 20);

	return 0;
}