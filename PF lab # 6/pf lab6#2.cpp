#include<stdio.h>
int main()
{
	int nnn,count=0,sum=0;
	printf("till what number you want to print prime numbers?\n");
	scanf("%d",&nnn);
	for (int i=2;i<=nnn;i++)
	{
	int prime=1;
		for (int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				prime=0;
			}
		}
		if (prime==1)
		{
			printf("prime number=%d\n",i);
			count++;
			sum =sum+i;
		}
	}
	printf("the total number of prime numbers=%d\n",count);
    printf("the sum of prime numbers=%d\n",sum);
    return 0;
}
