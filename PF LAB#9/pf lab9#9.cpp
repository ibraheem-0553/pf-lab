#include<stdio.h>
float add(float,float);
float subtract(float,float);
float multiply(float,float);
float divide(float,float);
int main()
{
    float a,b,result;
    int choice;
    float (*operation)(float,float);
    printf("MINI CALCULATOR\n");
    printf("Select an option\n");
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    scanf("%d",&choice);
    printf("Enter first number\n");
    scanf("%f",&a);
    printf("Enter second number\n");
    scanf("%f",&b);
    switch (choice)
    {
        case 1:
        operation=add;
        break;
        case 2:
        operation=subtract;
        break;
        case 3:
        operation=multiply;
        break;
         case 4:
        operation=divide;
        break;
        default:
        printf("invalid choice\n");
    }
    result=operation(a,b);
    printf("result=%.2f",result);
    return 0;
}
float add(float a,float b)
{
    return a+b;
}
float subtract(float a,float b)
{
    return a-b;
}
float multiply(float a,float b)
{
    return a*b;
}
float divide(float a,float b)
{
    if (b==0)
    {
        printf("error\n");
    }
    else
    {
        return a/b;
    }
}
