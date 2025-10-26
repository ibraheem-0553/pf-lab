#include<stdio.h>
int main()
{
	int initial_balance=5000,transaction,updated_balance,final_balance;
	int deposit=0,withdrawal=0,balance=0;
	while (1)
	{
		printf("Input the amount of transaction(positive for deposits and negative for withdrawals)\n");
		scanf("%d",&transaction);
		if (transaction==0)
		{
			break;
		}
		balance=initial_balance+transaction;
		printf("updated balance=%d\n",balance);
		initial_balance=balance;
		if(transaction<0)
		{
			withdrawal++;	
		}
		else
		{
			deposit++;
		}
	}
	printf("the number of deposits=%d\n",deposit);
	printf("the number of withdrawal=%d\n",withdrawal);
	return 0;
}
