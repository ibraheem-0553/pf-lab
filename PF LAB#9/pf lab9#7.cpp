#include<stdio.h>
int main()
{
    int *p=NULL;
    if (p==NULL)
    {
        printf("It doesn't reference to any valid memory\n");
    }
    else
    {
        printf("It is pointing to valid memory\n");
    }
    return 0;
}
