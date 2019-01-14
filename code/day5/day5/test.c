#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
//void menu()											猜数字
//{
//	printf("********************************\n");
//	printf("**********  1.play   ***********\n");
//	printf("**********  0.quit   ***********\n");
//	printf("********************************\n");
//
//}
//void play()
//{
//	int a = 0;
//	int num = rand() % 100;
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &a);
//		if (a > num)
//		{
//			printf("猜大了\n");
//		}
//		if (a < num)
//		{
//			printf("猜小了\n");
//		}
//		if (a == num)
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	
//		do
//		{
//			menu();
//			printf("请选择\n");
//			scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				play();
//				break;;
//			case 0:
//				printf("退出游戏\n");
//					break;
//			default:
//				printf("输入错误\n");
//				break;
//			}
//
//		} while (input);
//		return 0;
//}
//int binary_search(int arr[],int  key,int  left,int  right)             折半查找
//{
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == key)
//			return mid;
//	}
//	return -1;
//
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 5;
//	//scanf("%d", &k);
//	int left = 0;
//	int right = sizeof(a) / sizeof(a[0]) - 1;
//	int b = binary_search(a, k, left, right);
//	printf("%d\n", b);
//	return 0;
//}
//#include<string.h>                         模拟密码输入
//int main()
//{
//	char input[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码（三次机会）\n");
//		scanf("%s", &input);
//		if (strcmp(input, "123456") == 0)
//		{
//			printf("输入正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码不正确\n");
//		}
//	}
//	if (i >= 3)
//	{
//		printf("输入错误三次，退出程序\n");
//	}
//	return 0;
//}
//int main()                大小写转换
//{
//	char input = 0;
//	while (1)
//	{
//		scanf("%c", &input);
//		/*if (input > '65')
//			continue;
//			else*/
//		if (input >= 'A'&&input <= 'Z')
//		{
//			printf("%c\n", input + 32);
//		}
//		else if (input >= 'a'&&input <= 'z')
//		{
//			printf("%c\n", input - 32);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0])-1;
//	int key = 6;
//	while (start <= end)
//	{
//		int mid = start + (end - start) / 2;
//		if (arr[mid] < key)
//		{
//			start = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			end = mid - 1;
//		}
//		else if (arr[mid] == key)
//		{
//			printf("找到了%d \n",mid);
//			break;
//		}
//	}
//	if (start > end)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//#include <stdio.h> 
//int main() 
//{    
//	int i = 0;    
//	for(i=1; i<=10; i++)    
//	{        
//		if(i == 5)            
//			continue;       
//		printf("%d ",i);   
//	}    
//	return 0; 
//}
//int main()
//{
//	int i;
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//		
//	}
//	return 0;
//}
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int study = 0;
//	printf("你会学习吗？1 or 0 \n");
//	scanf("%d", &study);
//	if (study == 1)
//	{
//		printf("坚持就是胜利\n");
//	}
//	else
//	{
//		printf("学习才是真理\n");
//	}
//	return 0;
//}
