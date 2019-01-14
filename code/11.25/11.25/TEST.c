#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void print(int n)          7.打印整数每一位
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//int fac2(int n)					6.n的阶乘
//{
//	int i = 0;
//	int s = 1;
//	for (i = 1; i <=n; i++)
//	{
//		s *= i;
//	}
//	return s;
//}
//int fac(int n)                            
//{
//	if (n > 1)
//	{
//		return n*fac(n - 1);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",fac2(n));
//	return 0;
//}
//int my_strlen(char *str)					5.my_strlen的两种方法
//{
//	if (*str!= '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int my_strlen2(char *str)
//{
//	int count = 0;
//	for (*str; *str != '\0'; str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char a[20] = { 0 };
//	scanf("%s", &a);
//	printf("%d\n", my_strlen(a));
//	printf("%d\n",my_strlen2(a));
//	return 0;
//}
void reverse_string(char * string)               //4.reverse_string函数
{
	if (*string != '\0')
	{
		reverse_string(string + 1);
	}
	else
		return 0;
	printf("%c",*string);
}
int main()
{
	char a[20] = { 0 };
	scanf("%s", &a);
	reverse_string(a);
	return 0;
}
//int DigitSum(int n)                   3.    DigitSum函数   
//{
//	int sum = 0 ;
//	if (n / 10 != 0)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//		return n;
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a=DigitSum(n);
//	printf("%d", a);
//	return 0;
//}
//int fun(int n, int k)           2.n的k次方
//{
//	int i = 0;
//	int s = 1;
//	for (i = 0; i < k; i++)
//	{
//		s *= n;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d\n", fun(n, k));
//}
//int fib(int n)                1. 斐波那契数列
//{
//	int a = 1;
//	int b = 1;
//	int sum = 0;
//	if (n > 2)
//	{
//		int i = 0;
//		for (i = 0; i < n - 2; i++)
//		{
//			sum = a + b;
//			a = b;
//			b = sum;
//		}
//		return sum;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",fib(n));
//	return 0;
//}
//int fib(int n)
//{
//	if (n > 2)
//	{
//		return fib(n - 2) + fib(n - 1);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",fib(n));
//	return 0;
//}