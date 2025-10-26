#include<stdio.h>
int main()
{
	int num,largest,smallest,first_time=1;
	char ch='y';
	do
	{
		printf("enter a number\n");
		scanf("%d",&num);
		if(first_time)
		{
			largest = smallest = num;
			first_time=0;
		}
		else
		{
			if (num>largest)
			largest=num;
			if (num<smallest)
			smallest=num;
		}
		printf("current largest=%d\n",largest);
		printf("current smallest=%d\n",smallest);
		printf("do you want to continue?(yes or no)\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
	printf("the largest number is=%d\n",largest);
	printf("the smallest number is =%d\n",smallest);
	return 0;
}
