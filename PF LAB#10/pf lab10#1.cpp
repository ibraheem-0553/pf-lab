#include<stdio.h>
#include<string.h>
int main()
{
	char total_words[100];
	printf("Enter a code word:");
	fgets(total_words,100,stdin);
	int len=strlen(total_words);
	printf("enter word %s has %d characters",total_words,len-1);
	return 0;
}

