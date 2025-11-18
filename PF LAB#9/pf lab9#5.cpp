#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int c,d;
    printf("Enter the value of c\n");
    scanf("%d",&c);
    printf("Enter the value of d\n");
    scanf("%d",&d);
    printf("The value of c=%d and d=%d\n",c,d);
    swap(&c,&d);
    printf("New value of c=%d and d=%d",c,d);
    return 0;
}
