#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<rows-i-1;j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            int fact_i = 1, fact_j = 1, fact_ij = 1;
            for(int k = 1; k <= i; k++) 
            {
                fact_i *= k;
            }
            for(int k = 1; k <= j; k++) 
            {
                fact_j *= k;
            }
            for(int k = 1; k <= (i - j); k++) 
            {
                fact_ij *= k;
            }
            
            int number = fact_i / (fact_j * fact_ij);
            printf("%d ", number);
        }
        printf("\n");
    }
    return 0;
}
