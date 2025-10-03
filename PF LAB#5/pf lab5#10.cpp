#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	printf("Enter the value of y\n");
	scanf("%d",&y);
	printf("Enter the value of z\n");
	scanf("%d",&z);
	if (x>y)
	{
		if(x>z)
		{
			printf("x is the greatest number\n");
		}
		else
		{
			printf("z is the greatest number\n");
		} 
	}
	else
	{
		if (y>z)
		{
			printf("y is the greatest number\n");
		}
		else
		{
			printf("z is the greatest number\n");
		}
	}
	return 0;
}
