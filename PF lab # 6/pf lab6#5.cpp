#include<stdio.h>
int main()
{
	int nnn,fictorial=1;
	printf("Till what number do you wnat the fictorial?\n");
	scanf("%d",&nnn);
	for (int i=1;i<=nnn;i++)
	{
		fictorial=fictorial*i;
	}
	printf("the fictorial of %d number is=%d\n",nnn,fictorial);
	return 0;
}
