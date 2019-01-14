#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//int my_strlen( const char* rse)
//{
//	int count = 0;
//	assert(rse != NULL);
//	while (*rse != '\0')
//	{
//		count++;
//		rse++;
//	}
//	return count;
//
//}
//int main()
//{
//	char b[20] = "hello world";
//	printf("%d\n",my_strlen(b));
//	return 0;
//}
union un
{
	char c;
	int i;
};
void chack()
{
	union un u;
	u.i = 1;
	if (u.c == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
		printf("´ó¶Ë\n");
}
int main()
{
	chack();
	return 0;
}