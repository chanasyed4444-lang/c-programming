//maximum of 3 numbers using conditional
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?a:(b>c?b:c);
	printf("max=%d",max);
	return 0;
}
