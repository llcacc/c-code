#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
//void menu()											������
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
//		printf("�������\n");
//		scanf("%d", &a);
//		if (a > num)
//		{
//			printf("�´���\n");
//		}
//		if (a < num)
//		{
//			printf("��С��\n");
//		}
//		if (a == num)
//		{
//			printf("��ϲ��¶���\n");
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
//			printf("��ѡ��\n");
//			scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				play();
//				break;;
//			case 0:
//				printf("�˳���Ϸ\n");
//					break;
//			default:
//				printf("�������\n");
//				break;
//			}
//
//		} while (input);
//		return 0;
//}
//int binary_search(int arr[],int  key,int  left,int  right)             �۰����
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
//#include<string.h>                         ģ����������
//int main()
//{
//	char input[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������루���λ��ᣩ\n");
//		scanf("%s", &input);
//		if (strcmp(input, "123456") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("���벻��ȷ\n");
//		}
//	}
//	if (i >= 3)
//	{
//		printf("����������Σ��˳�����\n");
//	}
//	return 0;
//}
//int main()                ��Сдת��
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
//			printf("�ҵ���%d \n",mid);
//			break;
//		}
//	}
//	if (start > end)
//	{
//		printf("û�ҵ�\n");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int study = 0;
//	printf("���ѧϰ��1 or 0 \n");
//	scanf("%d", &study);
//	if (study == 1)
//	{
//		printf("��־���ʤ��\n");
//	}
//	else
//	{
//		printf("ѧϰ��������\n");
//	}
//	return 0;
//}
