#include<stdio.h>
int main()
{
	int a=10,*p;
	p=&a;
	printf("value of a=%d");
	printf("\n address of a=%u",p);
	printf("\n address of p=%u",&p);
	printf("\n value of p=%d",*p);
	return 0;
}
