#include <stdio.h>
#include <string.h>
int main()
{
	int n = 0;
	fputs("Enter the number of starting characters to be set side for product category:\n ",stdout);
	scanf("%d",&n);
	if(n>10)
	{
		printf("Invalid Input!\n");
	}
	char arr1[20],arr2[20];
	printf("Enter your first product code:\n");
	scanf("%s" ,arr1);
	printf("Enter your second product code:\n");
	scanf("%s" ,arr2);
	if(strncmp(arr1,arr2,n) == 0)
	{
		printf("Products belong to same category.\n");
	}
	else
	{
		printf("Product not in same category:\n");
	}
	return 0;
}	

