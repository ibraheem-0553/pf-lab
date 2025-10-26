#include<stdio.h>
int main()
{
    int a[10]={67,87,75,98,56,66,90,43,23,91};
    int temp;
    float median;
    int length=10;
    printf("Original Array\n");
    for (int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    for (int i=0;i<10;i++)
    {
        for (int j=i+1;j<10;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nAscending order\n");
    for (int i=0;i<10;i++)
    {
    printf("%d ",a[i]);
    }
    if (length%2==0)
    {
        median=(a[length/2-1]+a[length/2])/2;
        printf("\nmedian=%.2f",median);
    }
    if (length%2!=0)
    {
        median=a[length]/2;
        printf("\nmedian=%.2f",median);
    }
    return 0;
    
}
