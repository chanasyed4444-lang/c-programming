#include<stdio.h>
int main()
{
	int a[100],n,i,sum=0;
	printf("enter array size");
	scanf("%d",&n);
	printf("\n enter array value");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of array values=%d",sum);
	return 0;
}
