//simple interest
#include<stdio.h>
int main()
{
	int p,r,t,SI;
	printf("enter p,r,t values");
	scanf("%d%d%d",&p,&r,&t);
	SI =p*r*t/100;
	printf("SI=%d",SI);
	return 0;
}
