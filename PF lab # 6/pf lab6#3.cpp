#include<stdio.h>
int main()
{
	int nnn,first=0,second=1,next,sum=0;
	printf("till what number you want to print Fibonacci sequence\n");
	scanf("%d",&nnn);
	if(nnn<0)
	{
		printf("enter a positive number\n");
		scanf("%d",&nnn);
	}
	for (int i=1;i<=nnn;i++)
	{
		if(i==1)
		{
			next=first;
		}
		else if(i==2)
		{
			next=second;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		printf("%d\t",next);
		sum=sum+next;
	}
	printf("\nthe sum sequence is=%d\n",sum);
	return 0;
}
