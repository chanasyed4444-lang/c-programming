//unary operators
#include<stdio.h>
int main()
{
	int x=10,p,q,r,s;
	p=++x;
	printf("p=%d",p);
	q=x--;
	printf("/n q=%d",q);
	r=x++;
	printf("/n r=%d",r);
	s=--x;
	printf("/n s=%d",s);
	printf("/n x=%d",x);
	return 0;
}
