//bitwise and or operators
#include<stdio.h>
int main()
{
	int x,y,AND,OR;
	printf("enter x&y values");
	scanf("%d%d",&x,&y);
	AND = x&y;
	printf("bitwise AND=%d",AND);
	OR  = x!y;
	printf("/n bitwise OR=%d",OR);
	return 0;
}
