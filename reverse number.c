#include<stdio.h>
int main()
{
	int n,rev=0,d;
	printf("enter any number");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	printf("reverse number=%d",rev);
	return 0;
}
