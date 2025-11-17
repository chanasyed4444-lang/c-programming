#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("enter string name");
	gets(s);
	printf("lower case string is =%s",strlwr(s));
	return 0;
}
