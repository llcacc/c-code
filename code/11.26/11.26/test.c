#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int numJewelsInStones(char* J, char* S)
{
	int count = 0;
	char p=S
	for (*J; *J != '\0'; J++)
	{
		for (*p; *p != '\0'; p++)
		{
			if (*S == *J)
			{
				count++;
			}
		}
	}
	return count;
}

int main()
{
	char j[50] = { 0 };
	char s[50] = { 0 };
	scanf("%s", &j);
	scanf("%s", &s);
	printf("%d",numJewelsInStones(j, s));

	return 0;
}