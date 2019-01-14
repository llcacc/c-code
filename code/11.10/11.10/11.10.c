//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int j=0;
//	int count=0;
//	for(i=100;i<=200;i++)
//	{
//		for(j=2;j<i;j++)
//		{
//			if(i%j ==0)
//				break;		
//		}
//		if(j>=i)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int j=0;
//	for(i=1;i<=9;i++)
//	{
//		for(j=1;j<=i;j++)
//		printf("%d*%d=%d  ",i,j,i*j);
//		printf("\n");
//	}
//	printf(" ");
//	return 0;
//}
#include<stdio.h>
int main()
{
	int year=0;
	int count=0;
	for(year=1000;year<=2000;year++)
	{
		if(year%4==0&&year%100!=0||year%400==0)
		{
			printf("%d ",year);
			count++;
		}
	}
	printf("\ncount=%d\n",count);
	return 0;
}