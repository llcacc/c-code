#include<stdio.h>


//["test.email+alex@leetcode.com", "test.e.mail+bob.cathy@leetcode.com", "testemail+david@lee.tcode.com"]
//输出：2
//解释：实际收到邮件的是 "testemail@leetcode.com" 和 "testemail@lee.tcode.com"。

int numUniqueEmails(char** emails, int emailsSize) 
{

}



//int numJewelsInStones(char* J, char* S)
//{
//	int count = 0;
//	while (*S != '\0')
//	{
//		char *t = J;
//		while (*t != '\0')
//		{
//			if (*t == *S)
//			{
//				count++;
//			}
//			t++;
//		}
//		S++;
//	}
//	return count;
//}
//int main()
//{
//	char *j = "aA";
//	char *s = "aAAbbbb";
//	int i = numJewelsInStones(j, s);
//	printf("%d", i);
//}