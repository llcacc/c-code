#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
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
//		printf("�ǵ�\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}