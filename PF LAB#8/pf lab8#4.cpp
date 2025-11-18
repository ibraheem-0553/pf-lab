#include<stdio.h>
int main()
{
    int arr[3][3],upper=0,lower=0;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("Enter the value of index (%d,%d)=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
           if (i<j && arr[i][j]==0)
           {
               upper=1;
           }
           if (i>j && arr[i][j]==0)
           {
               lower=1;
           }
        }
    }
    if (upper==1)
    {
        printf("UPPER TRIANGULAR MATRIX\n");
    }
    else if (lower==1)
    {
        printf("LOWER TRIANGULAR MATRIX\n");
    }
    else
    {
        printf("NEITHER\n");
    }
    
}
