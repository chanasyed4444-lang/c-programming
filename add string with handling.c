#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("enter string 1 name");
	gets(s1);
	printf("enter string 2 name");
	gets(s2);
	strcat(s1,s2);
	printf("merge string =%s",s1);
	return 0;
}
