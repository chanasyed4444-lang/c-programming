#include<stdio.h>
int main()
{
	int a=10,b=5,*p,*q;
	int sum,sub;
	p=&a;
	q=&p;
	sum=*p+*q;
	printf("\nsum=%d",sum);
	sub=*p-*q;
	printf("\nsub=%d",sum);
	return 0;
}
