#include<stdio.h>
int main()
{
	int s1,s2,s3,total,per;
	printf("enter 3 subjects marks");
	scanf("%d%d%d",&s1,&s2,&s3);
	total=s1+s2+s3;
	per=(total/3)*100;
	if(s1>=40&& s2>=40&& s3>=40)
	{
		if(per>=90)
		printf("A Grade");
		else if (per>=70)
		printf("B Grade");
		else if (per>=50)
		printf("C Grade");
		else if (per>=40)
		printf("D Grade");
	}
	else
	printf("failed");
	return 0;
	}

