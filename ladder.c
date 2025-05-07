#include<stdio.h>

int main()
{
	int number;
	
	printf("enter any number:");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("the number of positive.\n");
	}
	else if(number<0)
	{
		printf("the number of negative.\n");
	}
	else if(number=0)
	{
		printf("the number of neutal.\n");
	}
}