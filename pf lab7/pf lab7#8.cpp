#include<stdio.h>
int main()
{
    char ch[1000],A,E,I,O,U,a,e,i,o,u;
    int num;
    printf("Enter the number of characters in string\n");
    scanf("%d",&num);
    printf("Enter the string\n");
    for (int i=0;i<num;i++)
    {
        scanf(" %c",&ch[i]);
    }
    for (int i=0;i<num;i++)
    {
        if (ch[i]=='a')
        {
            ch[i]='A';
        }
        if (ch[i]=='e')
        {
            ch[i]='E';
        }
        if (ch[i]=='i')
        {
            ch[i]='I';
        }
        if (ch[i]=='o')
        {
            ch[i]='O';
        }
        if (ch[i]=='u')
        {
            ch[i]='U';
        }
    }
    for (int i=0;i<num;i++)
    {
        printf(" %c",ch[i]);
    }
}
