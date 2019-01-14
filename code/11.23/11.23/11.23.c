#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10] = { -2, 11, -4, 13, -5, 2, -5, -3, 12, -9 };
	int i = 0;
	int sum = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum > max)
		{
			max = sum;
		}
	}
	printf("%d", max);
	return 0;

}