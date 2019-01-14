#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
//void fun(int n)                   n*n乘法表
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	fun(input);
//	return 0;
//}
//void swap(int *a, int *b)             函数两个数交换
//{
//	int t= 0;
//	t = *a; 
//	*a = *b;
//	*b = t;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}
//int fun(int year)                        闰年
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (fun(year) == 1)
//	{
//		printf("闰年\n");
//	}
//	else
//		printf("不是闰年\n");
//	return 0;
//}
//void init(int arr[])                       实现函数init()empty()reverse()
//{
//	printf("请初始化数组\n");
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//void empty(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[],int left,int right)
//{
//	int start = 0;
//	while (left<right )
//	{
//		int t = 0;
//		t= arr[right];
//		arr[right] = arr[left];
//		arr[left] = t;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int i = 0;
//	int a[10] = { 0 };
//	int b[] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
//	int left = 0;
//	int right = sizeof(b) / sizeof(a[0]) - 1;
//	init(a);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	empty(a);
//	printf("\n清除数据成功\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	reverse(b, left, right);
//	printf("\n逆转后的b=");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", b[i]);
//	}
//
//}
int prime(int n)                      //函数实现求素数
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			return 1;
		}
	}
		return 0;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int j = prime(a);
	if (j == 1)
		printf("不是素数\n");
	else
		printf("是素数\n");
	return 0;

}