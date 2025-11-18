#include<stdio.h>
float avg(int,int,int);
int main()
{
    int a,b,c;
    float result;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    result=avg(a,b,c);
    printf("Average=%.2f",result);
    return 0;
}
float avg(int a,int b,int c)
{
    return (a+b+c)/3;
}
