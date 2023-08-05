#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//
//	return count;
//}

//size_t my_strlen(const char* str)
//{
//	while (*str)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}

//size_t my_strlen(const char* str)
//{
//	char* ret = str;
//	while (*str)
//	{
//		str++;
//	}
//
//	return str - ret;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//
//	return ret;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest)
//	{
//		dest++;
//	}
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	return *str1 - *str2;
//}

//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		if (*src == '\0')
//		{
//			*dest = '\0';
//			dest++;
//		}
//		else
//		{
//			*dest = *src;
//			dest++;
//			src++;
//		}
//	}
//	return ret;
//}

//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	while (*dest)
//	{
//		dest++;
//	}
//	while (num--)
//	{
//		if (*src)
//		{
//			*dest = *src;
//			dest++;
//			src++;
//		}
//		*dest = '\0';
//	}
//}
//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//	assert(str1 && str2);
//	while (num--)
//	{
//		if (*str1 == *str2)
//		{
//			if (num == 0)
//			{
//				return 0;
//			}
//			str1++;
//			str2++;
//		}
//		else if(*str1 < *str2)
//		{
//			return -1;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//}

//const char* my_strstr(const char* str1, const char* str2)
//{
//	char* s1 = str1;
//	char* s2 = str2;
//	char* p = str1;
//
//	while (*s1)
//	{
//		if (*s1 != *s2)
//		{
//			p++;
//			s1 = p;
//		}
//		else
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return p;
//		}
//	}
//
//	return NULL;
//}

int main()
{
	printf("%c\n", toupper('A'));
	printf("%c\n", toupper('a'));
	printf("%c\n", toupper('3'));
	printf("%c\n", toupper('@'));
 
	return 0;
}