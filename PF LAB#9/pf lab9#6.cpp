#include<stdio.h>
void calculate(int a,int b,int *sum,float *avg)
{
    *sum=a+b;
    *avg=(float)*sum/2;
}
int main()
{
    int c,d,sum;
    float avg;
    printf("Enter the valur of c\n");
    scanf("%d",&c);
    printf("Enter the value of d\n");
    scanf("%d",&d);
    calculate(c,d,&sum,&avg);
    printf("the sum is=%d\n",sum);
    printf("The avg is=%.2f",avg);
    return 0;
    
}
