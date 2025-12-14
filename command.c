#include<stdio.h>
int main(int argc,char*argv[])
{
	int a,b,sum;
	if(argc<3)
	{
	printf("please pass two numbers");
	return 0;	
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	sum=a+b;
	printf("sum=%d",sum);
	return 0;
}

