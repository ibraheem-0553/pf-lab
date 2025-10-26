#include<stdio.h>
int main()
{
    int a[1000],max,min,num,sum=0,maxindex,minindex;
    float average;
    printf("Enter the number of students\n");
    scanf("%d",&num);
    printf("Enter the grades of students\n");
    for (int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for (int i=0;i<num;i++)
    {
        printf("Grades of student %d=%d\n",i+1,a[i]);
    }
    average=(float) sum/num;
    printf("\nAverage=%.2f\n",average);
    max=a[0];
    min=a[0];
    for (int i=1;i<num;i++)
    {
        if (max<a[i])
        {
            max=a[i];
            maxindex=i;
        }
        if (min>a[i])
        {
            min=a[i];
            minindex=i;
        }
    }
    printf("highest score=%d (index=%d)",max,maxindex);
    printf("\nlowest score=%d (index=%d)",min,minindex);
    a[minindex]=a[minindex]+50;
    printf("\nModified grade list\n");
    for (int i=0;i<num;i++)
    {
        printf("Grade of student %d=%d\n",i+1,a[i]);
    }
    return 0;
}
