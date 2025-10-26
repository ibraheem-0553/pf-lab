#include<stdio.h>
int main()
{
	int grades=0;
	float counter=0,sum=0,above_70=0,between50_70=0,below_50=0;
	while (grades!=-1)
	{
		printf("Enter the grade(between 0 to 100)\n");
		scanf("%d",&grades);
		if (grades==-1)
		{
			break;
		}
		sum=sum+grades;
		counter++;
		if (grades>=70)
		{
			above_70++;
		}
		else if(grades>=50 && grades<70)
		{
			between50_70++;
		}
		else
		{
			below_50++;
		}
	}
	float avg=sum/counter;
	printf("the average of all grades is = %.2f\n",avg);
	printf("the total number of grades = %.2f\n",counter);
	printf("the grades above 70 are=%.2f\n",above_70);
	printf("the grades between 50 and 70 are=%.2f\n",between50_70);
	printf("the grades below 50 are=%.2f\n",below_50);
	return 0;
}
