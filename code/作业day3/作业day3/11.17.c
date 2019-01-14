//#include<stdio.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int key = 5;
//	int right = sizeof(a) / sizeof(a[0]) - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (a[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] = key)
//		{
//			printf("找到了!%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) >> 1;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;				//找到了，返回下标   
//	}
//	return -1;
//}				//找不到 
# include<stdio.h>                     
//int main()                           \\交换两个数组
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int temp = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	printf("arr1= ");
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d ", arr1[j]);
//	}
//	printf("\narr1=");
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//	return 0;
//}
//int main()						\\2
//{
//	int i = 0;
//	float sum = 0;
//	for (i = 1; i <= 100; i ++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0/ i;
//		}
//		else
//			sum += 1.0 / i;
//	}
//	printf("%f", sum);
//	return 0;
//}
//int main()                     \\3
//{
//	int i = 0; 
//	int count = 0;
//	int a = 0;
//	int b = 0;
//	for (i = 1; i <= 100; i++)
//	{ 
//		a = i % 10;
//		b = i / 10;
//		if (9 == a)
//		{
//			count++;
//		}
//		if (9 == b)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}