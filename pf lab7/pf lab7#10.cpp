#include<stdio.h>
int main()
{
    int num,index,new_value;
    printf("How many elements do you want to enter\n");
    scanf("%d",&num);
    int a[num];
    printf("Enter the elements\n");
    for (int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<num;i++)
    {
        printf("The %d element is=%d\n",i+1,a[i]);
    }
    printf("\nenter the index if you want to modify any number from 0 to %d\n",num);
    scanf("%d",&index);
    if (index>=0 && index<num)
    {
        printf("Enter modified element\n");
        scanf("%d",&new_value);
        a[index]=new_value;
        printf("\nMODIFIED ARRAY\n");
        for (int i=0;i<num;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    else
    {
        printf("invalid index");
    }
}
