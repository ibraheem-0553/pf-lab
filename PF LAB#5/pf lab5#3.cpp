#include<stdio.h>
#include<math.h>
int main()
{
	float a,answer;
	printf("enter the value of a");
	scanf("%f",&a);
	answer=sqrt(a);
	if (a<0)
	{
		printf("wrong answer\n");
	}
	else
	{
		printf("the square root of a is=%f\n",answer);
	}
	return 0;
}
