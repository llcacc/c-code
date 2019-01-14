#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
1.实现一个函数，可以左旋字符串中的k个字符。
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB
//1.调整数组使奇数全部都位于偶数前面。 
//void fun(int arr[],int len)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < len; i++)  //1 2 3 4 5 6 7 8 9 10
//	{
//		
//		if (arr[i] % 2 != 0)
//		{
//			int t = 0;
//			t = arr[i];
//			arr[i] = arr[ count];
//			arr[count] = t;
//			count++;
//			if (i != 0)
//			{
//				i--;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	fun(a,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//2.杨氏矩阵 
int find(int a[3][3],int key,int*px,int *py)
{	
	int x = 0;
	int y = *py-1;
	int i = 0;
	while ((x<*px - 1)&&(y>=0))					//1 2 3
	{											//4 5 6
		if ((a[x][y] > key))					//7 8 9
		{
			y--;
		}
		else if (a[x][y] < key)
		{
			x++;
		}
		else  
		{
			*px = x;
			*py = y;
			return 1;
		}	
	}
	*px = -1;
	*py = -1;
	return 0;
	
}
int main()
{
	int a[3][3] = { 1,2,3,4,5,6,7,8,9};
	int x = 3; 
	int y = 3;
	int ret = find(a,4,&x,&y);
	if (ret == 1)
	{
		printf("找到了%d %d\n", x, y);
	}
	else
	{
		printf("没找到%d %d\n", x, y);
	}
	return 0;
}