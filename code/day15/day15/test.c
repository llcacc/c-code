#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�

//int main()
//{
//	int arr[] = { 1, 2, 3, 3, 2, 1, 4, 5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int t = 0;
//	int p = 0;
//	int num1;
//	int num2;
//	for (i = 0; i < len; i++)
//	{
//		t ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((t >> i) & 1) == 1)
//		{
//			p = i;
//			break;
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (((arr[i] >> p) & 1) == 1)
//		{
//			num1 = arr[i];
//				
//		}
//	}
//	num2 = t^num1;
//	printf("%d %d", num1, num2);
//	return 0;
//}
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//int main()
//{
//	int money = 20;
//	int all = 0;
//	int empty = money;
//	all = money;
//	while (empty / 2 != 0)
//	{
//		all += empty / 2;
//		empty = empty / 2+empty % 2;
//
//	}
//	printf("%d\n", all);
//	return 0;
//}
//3.ģ��ʵ��strcpy
//char* my_strcpy(char* dest, const char *rse)
//{
//	char* ret = dest;
//	assert(dest!=NULL);
//	assert(rse!=NULL);
//	while (*rse != '\0')
//	{
//		*dest = *rse;
//		dest++;
//		rse++;
//	}
//	return ret;
//
//	
//}
//int main()
//{
//	char s[]= "abc";
//	char s2[] = "qwe";
//	char* s3=my_strcpy(s, s2);
//	printf("%s\n", s);
//	printf("%s\n", s3);
//	return 0;
//}
//4.ģ��ʵ��strcat
//char *my_strcat(char *dest, const char *rse)
//{
//	assert(dest);
//	assert(rse);
//	char *ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++=*rse++)
//	{
//		;
//	}
//	
//	return ret;
//}
//int main()
//{
//	char s[20] = "asd";
//	char s2[] = "qwe";
//	char *t =my_strcat(s, s2);
//	printf("%s\n", s);
//	printf("%s\n", t);
//
//	return 0;
//	return 0;
//}