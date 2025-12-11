#include<stdio.h>
#include<stdlib.h>
int main ()
{
int *ptr=(int*)malloc(5*sizeof(int));
for (int i=0;i<5;i++)
{
ptr[i]=i+1;
}
printf("sixth value=%d",ptr[5]);
free(ptr);
return 0;
}
