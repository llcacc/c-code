#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int ret = 0;
	for (i = 0; i < 32; i++)
	{
		ret <<= 1;
		ret=(ret | (value & 1));
		value >>= 1;
		
	}
	return ret;
}
int main()
{
	int a = 25;
	int b=reverse_bit(a);
	printf("%u\n", b);
	return 0;
}



//int main()			//求一个数组中不重复的数
//{
//	int a[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
//	int len = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < len; i++)
//	{
//		ret = a[i] ^ ret;
//	}
//	printf("%d", ret);
//	return 0;
//}




//unsigned int reverse_bit(unsigned int value)    //反转二进制的另一种方式
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum += (unsigned int)pow(2, 31 - i)*((value >> i) & 1);
//	}
//	return sum;
//}
//int main()
//{
//	int a = 25;
//	printf("%u\n", reverse_bit(a));
//	return 0;
//}




//int ave(int x, int y)         //求平均值的三种方式
//{
//	return (x + y) >> 1;
//}
//int ave2(int a, int b)
//{
//	return a + (b - a) / 2;
//}
//int ave3(int a, int b)
//{
//	return ((a&b) + ((a^b) >> 1));
//	
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("%d\n",ave(a,b));
//	printf("%d\n",ave2(a, b));
//	printf("%d\n", ave3(a, b));
//
//	return 0;
//}
//有一个字符数组的内容为:"student a am i", 
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//void change(char* ch ,int sz)
//{
//	char* right = ch+sz-1;
//	char* left = ch;
//	while (left < right)
//	{
//		char temp = 0;
//		temp = *right;
//		*right = *left;
//		*left = temp;
//		left++;
//		right--;
//	}
//}
//void fun(char ch[])
//{							//i ma a tneduts
//	
//	while (*ch != '\0')
//	{
//		char* t = ch;
//		int count = 0;
//		while (*ch != ' '&& *ch != '\0')
//		{
//			ch++;
//			count++;
//		}
//		change(t, count);
//		if (*ch != '\0')
//		{
//			ch++;
//		}
//	}
//}
//int main()
//{
//	char ch[] = "student a am i";          
//	int len = sizeof(ch) / sizeof(ch[0]) - 1;
//	change(ch, len);
//	fun(ch);
//	printf("%s\n", ch);
//	return 0;
//}