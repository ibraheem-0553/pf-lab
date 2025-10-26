#include<stdio.h>
int main()
{
	int num,sum=0;
	char ch='y';
	while(ch=='y'|| ch=='Y')
	{
		printf("Enter a number\n");
		scanf("%d",&num);
		sum=sum+num;
		printf("do you want to continue?");
		scanf(" %c",&ch);
	}
	printf("the total sum is=%d",sum);
	return 0;
}
