//marks of five subjects
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	float avg;
	printf("enter five subject marks");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=(s1+s2+s3+s4+s5);
	avg=total/5;
	printf("total of five subject=%d",total);
	printf("avg of five subject=%f",avg);
	return 0;
}
