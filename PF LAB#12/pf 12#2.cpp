#include<stdio.h>
#include<stdlib.h>
int main (){

int *ptr=(int*)malloc(5*sizeof(int));
for (int i=0;i<5;i++)
{
ptr[i]=i+1;
}
free(ptr);//garbage value is assigned
free(ptr);//nothing appears
printf("%d",ptr);
return 0;
}
