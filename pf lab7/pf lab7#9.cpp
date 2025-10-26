#include<stdio.h>
int main()
{
    int a[1000],b[1000],merged[1000],length1,length2;
    printf("enter the length of first array\n");
    scanf("%d",&length1);
    printf("enter the elements of 1st array\n");
    for (int i=0;i<length1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the length of second array\n");
    scanf("%d",&length2);
    printf("enter the elements of 2nd array");
    for (int i=0;i<length2;i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i=0;i<length1;i++)
    {
        merged[i]=a[i];
    }
    for (int j=0;j<length2;j++)
    {
        merged[length1+j]=b[j];
    }
    printf("\nMERGED ARRAY\n");
    for (int k=0;k<length1+length2;k++)
    {
         printf("%d ",merged[k]);
    }
   
}
