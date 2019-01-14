#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>                    1
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int temp = 0;
//	scanf("%d%d", &a, &b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d\n", a, b);
//
//	return 0;
//}
//#include<stdio.h>           2
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d  %d\n", a, b);
//	return 0;
//
//}
//# include<stdio.h>                3
//int main()
//{
//	int arr[10] = { 112, 22, 33, 66, 55, 44, 85, 21, 36, 222 };
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//return 0;
//}
//#include<stdio.h>             4
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp;
//	scanf("%d%d%d", &a, &b, &c);
//	if (c > a)
//	{
//		temp = c;
//		c = a;
//		a = temp;
//	}
//	if (b > a)
//	{
//		temp = b;
//		b = a;
//		a = temp;
//	}
//	
//	if (c > b)
//	{
//		temp = c;
//		c = b;
//		b = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//
//}
//#include<stdio.h>                   5
//int fun(int x,int y)
//{
//	int temp;
//	if (y < x)
//	{
//		temp = y;
//		y = x;
//		x = temp;
//	}
//	while (y%x != 0)
//	{	
//		int t;
//		t = x;
//		x = y%x;
//		y = t;
//	
//	}
//	return x;
//}
//int main()
//{
//	printf("%d\n", fun(319, 377));
//	return 0;
//}