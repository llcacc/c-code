#include<stdio.h>
int main()
{
	int i=0;
	int j=0;
	int sum=0;
	for(i=1;i<=100;i+=2)
	{
		sum=sum+i;
	}
	for(j=0;j>=-100;j-=2)
		{
			sum=sum+j;
			
		}
	printf("%d",sum);
	return 0;
}