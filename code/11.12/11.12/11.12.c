#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bublesort(int arr[], int n)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < n - 1; j++)
	{
		for (i = 0; i < n - j-1; i++)
		{
			int temp;
			if (arr[i] > arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}
int main()
{
	int a[10] = { 3, 5, 6, 1, 2, 71, 55, 33, 66, 95 };
	bublesort(a, 10);
	for (int i = 0; i < 10;i++)
	printf("%d  ", a);
}
//int main()
//{
//	long long a = 0;
//	long long b = 0;
//	scanf("%d%d",&a,&b);
//	printf("%I64d", a + b);
//	return 0;
//
//}
//int sum(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", sum(a, b));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int mystrlen(char*arr)
//{
//	int length = 0;
//	while (*arr++!= '\0' )
//		length++;
//	return length;
//}
//int main()
//{
//	char arr[] = "hello";
//		printf("%d\n",mystrlen(arr));
//		printf("%d\n", strlen(arr));
//	return 0;
//}
////int find_char(char **strings, char value)
////{
////	char *string;
////	while ((string = *string++) != NULL)
//	{
//		while (*string != '\0')
//		{
//			if (*string++ == value)
//				return ture;
//		}
//	}
//	return false;
//}
//int main()
//{
//	char
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int *p = &arr;
//	int *t = &p;
//	printf("%d\n", *p);
//	printf("%d\n", p);
//	printf("%d\n", *t);
//	return 0;
//}