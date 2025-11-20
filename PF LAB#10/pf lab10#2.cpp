#include<stdio.h>
#include<string.h>
int main()
{
	char total_word[100];
	char character;
	printf("Enter a word:");
	scanf("%s",total_word);
	printf("Which word you want to find:");
	scanf(" %c",&character);
	char *ch=strchr(total_word,character);
	int length=strlen(total_word);
	if (ch!=NULL)
	{
		int position=ch-total_word;
		printf("Your word is found at %d postion",position);
	}
	else
	{
		printf("not found");
	}
	return 0;
}

