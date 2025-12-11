#include<stdio.h>
int res(int num,int power){
	if (power==0)
	{
		return 1;
	}
	return num*res(num,power-1);
}
int main()
{
	int n,p;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter the power:");
	scanf("%d",&p);
	printf("Result=%d",res(n,p));
	
}
