#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("%d%d",&a,&b);
	printf("\n before swap a=%d b=%d,a,b");
	temp=a;
	a=b;
	b=temp;
	printf("\n after swap a=%d b=%d,a,b");
	return 0;
}
