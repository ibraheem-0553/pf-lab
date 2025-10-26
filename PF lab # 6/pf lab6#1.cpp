#include<stdio.h>
int main()
{
	int num,even=0,odd=0;
	char ch;
	do
	{
		printf("Enter a number\n");
		scanf("%d",&num);
		if (num%2==0)
		{
			printf("number is even\n");
			even=even+1;
		}
		else
		{
			printf("number is odd\n");
			odd=odd+1;
		}
		printf("Do you want to continue? (y for yes and n for no)\n");
		scanf(" %c",&ch);
	}
	while(ch=='y' || ch=='Y');
	printf("the number of even numbers entered=%d\n",even);
	printf("the number of odd numbers entered=%d\n",odd);
	return 0;
}
