#include<stdio.h>
void display(int []);
int main()
{
	int marks[]={10,20,30,40};
	display(marks);
	return 0;
}
void display(int marks [])
{
	int i;
	printf("display array values");
	for(i=0;i<4;i++)
	{
		printf("%d",marks[i]);
	}
}
