#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int a, b, c, d, e;
	for (a = 1; a  <=5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <=5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2 && a != 3) || (b != 2 && a == 3)) && ((b == 2 && e != 4) || (b != 2 && e == 4)) && ((c == 1 && d != 2) || (c != 1 && d == 2))
							&& ((c == 5 && d != 3) || (c != 5 && d == 3)) && ((e == 4 && a != 1)||(e != 4 && a == 1)) && (a*b*c*d*e == 120))
							{
								printf("A=%d,B=%d,C=%d,D=%d,E=%d\n", a, b, c, d, e);
							}
					}
				}
			}
		}
	}
	return 0;
}
#include <stdio.h>  
int main()
{
	int murder;
	for (murder = 'A'; murder <= 'D'; murder++)
	{
		if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3)   
		{
			printf("murder is %c\n", murder);    

		}

	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int s = 1, h;                    // 数值和高度
	int i, j;                        // 循环计数
	scanf("%d", &h);                 // 输入层数
	printf("1\n");                   // 输出第一个 1
	for (i = 2; i <= h; s = 1, i++)         // 行数 i 从 2 到层高
	{
		printf("1 ");                // 第一个 1
		for (j = 1; j <= i - 2; j++) // 列位置 j 绕过第一个直接开始循环
			//printf("%d ", (s = (i - j) / j * s));
			printf("%d ", (s = (i - j) * s / j));
		printf("1\n");               // 最后一个 1，换行
	}
	getchar();                       // 暂停等待
	return 0;
}