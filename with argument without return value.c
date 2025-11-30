#include<stdio.h>
void sum(int,int);
int main()
{
	int a=10,b=5;
	sum (a,b);
	return 0;
}
void sum(int a, int b)
{
	int c;
	c=a+b;
	printf("sum=%d",c);
}
