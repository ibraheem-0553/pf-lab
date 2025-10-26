#include<stdio.h>
int main()
{
    int a[1000],length,id,j=0;
    printf("Enter the number of product id's\n");
    scanf("%d",&length);
    printf("Enter 3-digit product id's\n");
    for (int i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Which product id do you want to remove\n");
    scanf("%d",&id);
    for (int i=0;i<length;i++)
    {
        if (a[i]!=id)
        {
            a[j]=a[i];
            j++;
        }
    }
    printf("\nUPDATED PRODUCT ID'S\n");
    for (int i=0;i<j;i++)
    {
        printf("%d\n",a[i]);
    }
}
