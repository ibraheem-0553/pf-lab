#include<stdio.h>
int main()
{
   int arr[3][3],temp;
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
            printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
   for (int i=0;i<3;i++)
   {
       for (int j=0;j<3;j++)
       {
           temp=arr[i][j];
          arr[i][j]=arr[j][i];
          arr[j][i]=temp;
       }
   }
   printf("TRANPOSE\n");
   for (int i=0;i<3;i++)
   {
       for (int j=0;j<3;j++)
       {
            printf("%d ",arr[j][i]);
       }
       printf("\n");
   }
   
}
