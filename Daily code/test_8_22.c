#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int is_fibonacci(int num)
//{
//	int a = 0;
//	int b = 1;
//	int c = a + b;
//	while (c < num)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	if (c == num)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int fibonacci1(int n,int count1)
//{
//	if (is_fibonacci(n) == 1)
//	{
//		return count1;
//	}
//	else
//	{
//		count1++;
//		fibonacci1(n - 1,count1);
//	}
//}
//
//int fibonacci2(int n, int count2)
//{
//		if (is_fibonacci(n) == 1)
//		{
//			return count2;
//		}
//		else
//		{
//			count2++;
//			fibonacci2(n + 1, count2);
//		}
//}
//
//int main()
//{
//	int n = 0;
//	int count1 = 0;
//	int count2 = 0;
//	scanf("%d", &n);
//	int ret1 = fibonacci1(n,count1);
//	int ret2 = fibonacci2(n,count2);
//
//	printf("%d", (ret1 < ret2 ? ret1 : ret2));
//
//	return 0;
//}


//#include<stddef.h>
//struct Stu
//{
//	char name[5];
//	int i;
//	int j;
//};
//
//#define MYSET(type,member) (int)(&(((type*)0)->member))
//int main()
//{
//	printf("%d\n", MYSET(struct Stu, name));
//	printf("%d\n", MYSET(struct Stu, i));
//	printf("%d\n", MYSET(struct Stu, j));
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,1,2,2,3,3,4,5,5,6,7,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	int j = 0;
//	for (j = 0; j < 32; j++)
//	{
//		if ((ret >> j) & 1 == 1)
//		{
//			break;
//		}
//	}
//	int tmp1 = 0;
//	int tmp2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> j) & 1) == 1)
//		{
//			tmp1 ^= arr[i];
//		}
//		else if (((arr[i] >> j) & 1) == 0)
//		{
//			tmp2 ^= arr[i];
//		}
//	}
//	printf("%d %d", tmp1, tmp2);
//
//	return 0;
//}


//1.空指针
//2.空字符串
//3.空白字符
//4.+-
//5.非数字字符
//6.越界

//#include<stdlib.h>
//#include<ctype.h>
//#include<assert.h>
//#include<limits.h>
//
//enum status
//{
//	VALID,
//	INVALID
//}sta = INVALID;//默认非法
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	int flag = 1;
//	long long tmp = 0;
//
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	//处理空白字符
//	if (isspace(*str))
//	{
//		str++;
//	}
//	//+-
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			tmp = tmp * 10 + flag * (*str - '0');
//			str++;
//			if (tmp > INT_MAX || tmp < INT_MIN)
//			{
//				return (int)tmp;
//			}
//		}
//		else
//		{
//			return tmp;
//		}
//	}
//
//	if (*str == '\0')
//	{
//		sta = VALID;
//		return tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "-123abv456";
//	int ret = my_atoi(arr);
//	if (sta == INVALID)
//	{
//		printf("非法返回:%d\n", ret);
//	}
//	else if (sta == VALID)
//	{
//		printf("合法返回:%d\n", ret);
//	}
//
//	return 0;
//}

//#define SWAP(num) (((num&1431655765)<<1) + ((num&2863311530)>>1))
//int main()
//{
//	printf("%d", SWAP(5));
//
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int b = 1;
//	int c = a + b;
//	while (n > b)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	printf("%d", (abs(n - b) < abs(n - a)) ? abs(n - b) : abs(n - a));
//
//	return 0;
//}


#include<string.h>
char* replaceSpace(char* s)
{
    char* ret = s;
    int count = 0;
    size_t length = strlen(s);
    while (*ret)
    {
        if (*ret == ' ')
        {
            count++;
        }
        ret++;
    }
    char* end1 = s + length - 1;
    char* end2 = s + (length + count * 2) - 1;
    while (end1 != end2)
    {
        if (*end1 == ' ')
        {
            *end2-- = '0';
            *end2-- = '2';
            *end2-- = '%';
            end1--;
        }
        else
        {
            *end2-- = *end1--;
        }
    }

    return s;
}

int main()
{
    char arr[100] = "we are happy.";
    char* p = replaceSpace(arr);
    printf("%s\n", p);

	return 0;
}