#include<stdio.h>
int main()
{
	int n,*ptr,i,Malloc;
	printf("enter n value");
	scanf("%d",&n);
	ptr=(int*)Malloc(n*sizeof(int));
	printf("enter integer number");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	return 0;
}
