#include<stdio.h>
int main()
{
	int units;
	float  amount,charge,total;
	printf("enter no of units");
	scanf("%d",&units);
	if(units<=50)
	{
		amount=units*2.5;
		charge=30;
	}
	else if(units<=100)
	{
		amount=units*3;
		charge=50;
	}
	else if(units<=150)
	{
		amount=units*3.5;
		charge=70;
	}
	else if(units<=200)
	{
		amount=units*4;
		charge=90;
	}
	else
	{
		amount=units*5;
		charge=100;
		total=amount+charge;
		printf("electricity bill=%.2f",total);
	}
	return 0;
}
