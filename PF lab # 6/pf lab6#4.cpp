#include<stdio.h>
int main()
{
	char var,vowel;
	char ch='y';
	int v=0,c=0;
	do
	{
		printf("Enter a single character\n");
		scanf(" %c",&var);
		if (var=='a' || var=='A')
		{
			printf("it is a vowel= %c\n",var);
			v=v+1;
		}
		else if (var=='E' || var=='e')
		{
			printf("it is a vowel= %c\n",var);
			v=v+1;
		}
		else if (var=='i' || var=='I')
		{
			printf("it is a vowel= %c",var);
			v=v+1;
		}
		else if (var=='o' || var=='O')
		{
			printf("it is vowel= %c\n",var);
			v=v+1;
		}
		else if (var=='U' || var=='u')
		{
			printf("it is a vowel= %c\n",var);
			v=v+1;
		}
		else
		{
			printf("it is a consonant= %c\n",var);
			c=c+1;
		}
		printf("Do you want to continue? (y for yes and n for no)\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
	printf("the number of vowels entered=%d\n",v);
	printf("the number consonant entered=%d\n",c);
	return 0;
}
