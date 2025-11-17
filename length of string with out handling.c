#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int l,i;
	printf("enter string name");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++);
	l=i;
	printf("length of string=%d",l);
	return 0;

}
