#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the value of x");
	scanf("%d",&x);
	printf("enter the value of y");
	scanf("%d",&y);
	printf("enter the value of z");
	scanf("%d",&z);
	(x>y)?((x>z)?printf("x is the greatest number\n"):printf("z is the greatest number\n")): (y>z)?printf("y is the greatest number\n"):printf("z is the greatest number\n");
}
