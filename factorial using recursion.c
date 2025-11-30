#include<stdio.h>
long int fact(long int);
int main()
{
	long int n,f;
	printf("enter any number");
	scanf("%ld",&n);
	f=fact(n);
	printf("factorial is = %ld",f);
	return 0;
}
long int fact(long int n)
{
	if (n==0)
	return 1;
	else
	return (n*fact(n-1));
}
