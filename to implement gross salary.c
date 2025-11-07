#include<stdio.h>
int main()
{
	int bs,da,hra,gs;
	printf("enter bs value");
	scanf("%d",&bs);
	if(bs<=100);
	{
		da = bs*10/100;
		hra= bs*15/100;
	}
	if(bs>=100);
	else
	{
		da=bs*5/100;
		hra=bs*10/100;
	}
	gs=bs+da+hra;
	printf("gross salary=%d",gs);
	return 0;
}
