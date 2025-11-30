#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter a&b values");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d b=%d",a,b);
	swap(a,b);
	return 0;
}
void swap(int* x,int* y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("\n afterswap a=%d b=%d",*x,*y);
}
