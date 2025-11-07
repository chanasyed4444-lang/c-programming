#include<stdio.h>
int main()
{ 
	int n,s;
	hi:
	printf("enter a value");
	scanf("%d",&n);
	if (n<0)
	goto hi;
	s=sqrt(n);
	printf("sqrt=%d",s);
	return 0;
}
