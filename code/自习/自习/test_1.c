#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main()
{
	int i = 0;
	for (i = 1; i < 20; i++)
	{
		printf("%d  ", Fib(i));
	}
	return 0;
}
//int demo(int  a)
//{
//	int arr[] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = a % 10;
//	}
//	printf("%d", arr);
//		if (a > 10)
//		return demo(a / 10);
//	
//}
//int main()
//{
//	int a = 0;
//	long b = 0;
//	scanf("%d", &a);
//	demo(a);
//	
//
//	return 0;
//}
//#include<stdio.h>
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	if (n > 1)
//		return  fac(n - 1)*n;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", fac(a));
//	return;
//}
//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 20; i++)
//	{
//		printf("%d  ", Fib(i));
//	}
//	return 0;
//}
//#include<stdio.h>
//void ChangeArr(int a[],int b[])
//{
//	int t = 0;
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		t = a[i];
//		a[i] = b[i];
//		b[i] = t;
//	}
//
//}
//int main()
//{
//	int a1[5] = { 1, 2, 3, 6, 5 };
//	int a2[5] = { 9, 8, 5, 6, 2 };
//	ChangeArr(a1, a2);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", a1[i]);
//	}
//	printf("\n");
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%d ", a2[j]);
//	}
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//void bublesort(int arr[],int n)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	
//}
//int main()
//{
//	int a[10] = { 1, 99, 88, 56, 21, 22, 33, 52, 24, 10 };
//	bublesort(a, 10);
//	int x = 0;
//	for (x = 0; x < 10; x++)
//		printf("%d   ", a[x]);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 100; 
//	int b = 200;
//	printf("%d %d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}