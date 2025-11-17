#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("enter string name");
	gets(s);
	printf("upper case string is =%s",strupr(s));
	return 0;
}
