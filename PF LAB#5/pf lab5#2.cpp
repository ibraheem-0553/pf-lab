#include<stdio.h>
int main()
{
	int x,y;
	printf("enter value of x\n");
	scanf("%d",&x);
	printf("enter value of y\n");
	scanf("%d",&y);
	if ((x>5) && (y<10))
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	if ((x==10) || (y==5))
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	if (!(x==y))
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	return 0;
}
