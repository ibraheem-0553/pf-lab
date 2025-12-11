#include<stdio.h>
#include<stdlib.h>
int main()
{
int n=5;
int *ptr=(int*)malloc(5*sizeof(int));
for (int i=0;i<5;i++)
{
*(ptr+1)=i+1;
}
for (int i=0;i<5;i++)
{
printf("%d ",*(ptr+1));
}
free(ptr);
return 0;

}
