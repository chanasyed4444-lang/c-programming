#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],r1,c1,i,j;
	printf("enter rows&coloumn sizes");
	scanf("%d%d",&r1,&c1);
	printf(" enter A matrix values");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter B matrix values");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("result matrix is \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
