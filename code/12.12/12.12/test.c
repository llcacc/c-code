#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()				//排名问题
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (   ((b == 2 && a != 3) || (b != 2 && a == 3))
//							&& ((b == 2 && e != 4) || (b != 2 && e == 4))
//							&& ((c == 1 && d != 2) || (c != 1 && d == 2))
//							&& ((c == 5 && d != 3) || (c != 5 && d == 3))
//							&& ((e == 4 && a != 1) || (e != 4 && a == 1)) 
//							&& (a*b*c*d*e == 120))
//						{
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()						//杀手问题
//{
//	char killer;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("凶手是%c\n", killer);
//		}
//	}
//	return 0;
//}

//#define N 10								//杨辉三角
//int main()
//{
//	int a[N][N] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			a[i][0] = a[i][i] = 1;
//		}
//		for (j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < ((N - i) * 4) / 2; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%4d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}