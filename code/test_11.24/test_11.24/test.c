#include<stdio.h>
void bubblesort(int a[],int len)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
	

}
int main()
{
	int a[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int len = sizeof(a) / sizeof(a[0]) - 1;
	bubblesort(a, len);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}