#include<stdio.h>
#include<string.h>
struct airport{
	int flight_number;
	char dep_city[50];
	char des_city[50];
	char date[50];
	int avail_seats;
};
void add(struct airport air[],int in){
	printf("Enter flight number:");
	scanf("%d",&air[in].flight_number);
	getchar();
	printf("Enter departure city:");
	fgets(air[in].dep_city,50,stdin);
	air[in].dep_city[strcspn(air[in].dep_city,"\n")]=0;
	printf("Enter destination city:");
	fgets(air[in].des_city,50,stdin);
	air[in].des_city[strcspn(air[in].des_city,"\n")]=0;
	printf("Enter date:");
	fgets(air[in].date,50,stdin);
    air[in].date[strcspn(air[in].date,"\n")]=0;
    printf("Enter available seats:");
    scanf("%d",&air[in].avail_seats);
    printf("FLIGHT ADDED SUCCESSFULLy\n");
}
void book(struct airport air[],int seats)
{
	int fnum,found=0;
	printf("Enter flight number:");
	scanf("%d",&fnum);
	for (int i=0;i<5;i++)
	{
		if(air[i].flight_number==fnum)
		{
			found=1;
			if (air[i].avail_seats>0)
			{
				air[i].avail_seats--;
				printf("SEAT BOOKED\n");
			}
			else
			{
				printf("NO SEATS AVIALABLE\n");
			}
			break;
		}
	}
	if(found==0){
		printf("WRONG FLIGHT NUMBER\n");
	}
}
void display(struct airport air[],int count){
	if(count==0)
	{
		printf("no seats available");
		return;
	}
	for (int i=0;i<count;i++)
	{
		printf("Flight number:%d\n",air[i].flight_number);
		printf("Departure city:%s\n",air[i].dep_city);
		printf("Destination city:%s\n",air[i].des_city);
		printf("Date:%s\n",air[i].date);
		printf("Available seats:%d\n",air[i].avail_seats);
		printf("--------------------------------------\n");
	}
}
int main()
{
	struct airport air[5];
	int n,count=0,num_seats;
	do
	{
		printf("====MENU====\n");
		printf("1.ADD FLIGHT\n2.BOOK A SEAT\n3.SHOW ALL DETAILS\n4.EXIT\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				if(count<5)
				{
				add(air,count);
				count++;
				break;
				}
				else
				{
				printf("Cannot add more flights");
				}
			case 2:
				book(air,num_seats);
				break;
			case 3:
				display(air,count);
				break;
			default:
				printf("Enter correct option\n");
		}
		
	}while(n!=4);
	
}
