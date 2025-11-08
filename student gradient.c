#include<stdio.h>
int main()
{
	int percentage;
	printf("enter percentage value");
	scanf("%d",&percentage);
	if(percentage>=90)
	{
		printf("Grade:A");
	}
	else if(percentage>=80)
	{
		printf("\n Grade:B");
	}
	else if (percentage>=50)
	{
		printf("\n Grade:c");
	}
	else if(percentage>=40)
	{
		printf("\n Grade:D");
	}
	return 0;
}
