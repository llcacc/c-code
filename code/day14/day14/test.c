#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void move(char arr[],int num)
//{
//	int len = strlen(arr);
//	reverse(arr, arr + num - 1);
//	reverse(arr + num, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "ABCD";
//	move(arr, 1);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//	
//}
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//int chack(char s1[], const char *s2)
//{
//	int len = strlen(s1);
//	int len2 = strlen(s2);
//	char* arr = NULL;
//		if (len != len2)
//		{
//			return 0;
//		}
//	
//	strncat(s1, s1, len);
//	arr = strstr(s1, s2);
//	if (arr == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//		
//}
//int main()
//{
//	char str[] = "AABCD";
//	char *str2 = "CDAAB";
//	int ret =chack(str, str2);
//	if (ret == 1)
//	{
//		printf("是的\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//	return 0;
//}