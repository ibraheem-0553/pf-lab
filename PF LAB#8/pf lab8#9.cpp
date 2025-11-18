#include<stdio.h>
int main()
{
    int a[3][3],transpose[3][3],rev[3][3];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("Enter the value of index (%d,%d)=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix\n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            rev[i][j]=transpose[i][2-j];
        }
    }
    printf("AFTER 90 DEGREE CLOCKWISE ROTATION\n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d ",rev[i][j]);
        }
        printf("\n");
    }
    
    
   
}
