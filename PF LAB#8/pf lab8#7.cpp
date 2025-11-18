#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],k[2][2];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("Enter the values of 1st array of index (%d,%d)=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("Enter the values of 1st array of index (%d,%d)=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            k[i][j]=0;
            for (int c=0;c<2;c++)
            {
                 k[i][j]+=a[i][c]*b[c][j];
            }
        }
    }
    printf("RESULTING MATRIX\n");
     for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d ",k[i][j]);
        }
        printf("\n");
    }
    return 0;
}
