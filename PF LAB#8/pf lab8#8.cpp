#include<stdio.h>
int main()
{
    int a[3][3],even=0,odd=0,pos=0,neg=0,zero=0;
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
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
           if (a[i][j]%2==0)
           {
               even++;
           }
           else    
           {
               odd++;
           }
           if (a[i][j]<0)
           {
               neg++;
           }
           else if (a[i][j]>0)
           {
               pos++;
           }
           else 
           {
               zero++;
           }
        }
    }
    printf("ANALYSIS\n");
    printf("The number of even element=%d\n",even);
    printf("The number of odd element=%d\n",odd);
    printf("The number of negative element=%d\n",neg);
    printf("The number of positive element=%d\n",pos);
    printf("The number of zero element=%d\n",zero);
}
