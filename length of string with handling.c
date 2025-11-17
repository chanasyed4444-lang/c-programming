#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int l;
	printf("enter string name");
	scanf("%s",&s);
	l=strlen(s);
	printf("length of string=%d",l);
	return 0;
}
