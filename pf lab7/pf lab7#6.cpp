#include<stdio.h>
int main()
{
    int a[5],b[5];
    printf("Enter 5 numbers\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<5;i++)
    {
        a[i]=a[i]+10;
        a[i]=a[i]-5;
        a[i]=a[i]*2;
        b[i]=a[i];
    }
    for (int i=0;i<5;i++)
    {
        printf("\nthe result of operation on number %d=%d",i+1,b[i]);
    }
    return 0;
}
