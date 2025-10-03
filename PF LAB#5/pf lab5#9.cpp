#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	printf("the answer of a&b is= %d\n",a&b);
	printf("the answer of a|b is= %d\n",a|b);
	printf("the answer of a^b is= %d\n",a^b);
	printf("the answer of ~a is= %d\n",~a);
	printf("the answer of a<<1 is= %d\n",a<<1);
	printf("the answer of a>>1 is= %d",a>>1);
	return 0;
}
