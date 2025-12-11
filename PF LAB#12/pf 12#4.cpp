#include<stdio.h>
#include<stdlib.h>
int main(){
int *arr=(int *)malloc(1*sizeof(int));
int size=1;
int count=0;
int value;
while(1)
{
printf("Enter a number(-1 to stop):\n");
scanf("%d",&value);
if (value==-1)
{
break;
}
if(count==size)
{
size*=2;
arr=(int*)realloc(arr,size*sizeof(int));

}
arr[count]=value;
count++;
}
printf("Final array: ");
for (int i=0;i<count;i++)
{
printf("%d\n",arr[i]);
}
free(arr);
return 0;
}
