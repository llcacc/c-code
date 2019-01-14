#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
char *my_strcpy(char *dest, const char *rse)
{
	assert(dest);
	assert(rse);
	char *ret = dest;
	while (*dest++ = *rse++)
	{
		;
	}
	return ret;
}
char *my_strcat(char * dest, const char* rse)
{
	assert(dest);
	assert(rse);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *rse++)
	{
		;
	}
	return ret;
}

int main()
{
	char a[20] = "abcde";
	char* b = "abc";
	//my_strcpy(a, b);
	//printf("%s\n", a);
	/*my_strcat(a, b);*/
	
	printf("%s\n", strstr(a, b));
	return 0;
}