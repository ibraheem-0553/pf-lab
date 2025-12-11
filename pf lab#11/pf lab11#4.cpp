#include<stdio.h>
int main()
{
	const float pi=3.14;
	float radius,area,circum;
	printf("Enter the radius:");
	scanf("%f",&radius);
	circum=2*pi*radius;
	area=pi*radius*radius;
	printf("Circumference=%.2f",circum);
	printf("Area=%.2f",area);
}
