#include<stdio.h>
//int count_one_bits(unsigned int value)			//1.���ض�������1�ĸ���
//{
//	int temp = 1;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < sizeof(int) * 8;i++)
//	{
//		if ((value & 1) == 1)
//		{
//			count++;
//		}
//		value = value >>1;
//	}
//	return count;
//}
//int main()
//{
//	int a = 15;
//	printf("%d",count_one_bits(a));
//	return 0;
//}
//void fun(int value)                // 2.�ֱ��ӡһ�����Ķ�����ż��λ����λ����
//{
//	int i = 0;
//	int t = value;
//	printf("��������\n");
//	for (i = 0; i <= sizeof(value) * 8; i+=2)
//	{
//		printf("%d", value & 1);
//		value = value >> 2;
//	}
//	printf("\n");
//	t = t >> 1;
//	printf("ż������\n");
//	for (i = 1; i <= sizeof(value) * 8; i += 2)
//	{
//		printf("%d", t & 1);
//		t = t >> 2;
//	}
//}
//int main()
//{
//	int a = 20;
//	fun(a);
//	return 0;
//}
//void fun(int value)						//3. ������ÿһλ
//{
//	int i = sizeof(value) * 8;
//	while (i)
//	{
//		printf("%d",value & 1);
//		value >>= 1;
//		i--;
//	}
//}
//int main()
//{
//	int a = 15;
//	fun(15);
//	return 0;
//}
int fun(int a, int b)						//4.ͳ���������в�ͬ��λ��
{
	int t=a^b;
	int flag = 32;
	int count = 0;
	while (flag)
	{
		if ((t & 1) == 1)
		{
			count++;
		}
		t >>= 1;
		flag--;
	}
	return count;
}

int main()
{
	int a = 1999;
	int b = 2299;
	printf("%d\n",fun(a,b));
	return 0;
}
