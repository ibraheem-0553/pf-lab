#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a\n");
	scanf("%d",&a);
	printf("enter value of b\n");
	scanf("%d",&b);
	
	int answer=a+(b*(a-b)/2);
	printf("the first step is a-b=%d\n",a-b);
	printf("the second step is (a-b)/2=%d\n",(a-b)/2);
	printf("the third step is b*(a-b)/2=%d\n",b*(a-b)/2);
	printf("the fourth step is a+b*(a-b)/2=%d\n",a+b*(a-b)/2);
	
	printf("the answer is=%d\n",answer);
	return 0;
}
