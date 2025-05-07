#include<stdio.h>

int main()
{
	int a,b;
	
	printf("enter the value of a:");
	scanf("%d",&a);
	
	printf("enter the value of b:");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("the minimum value is:%d\n",a);
	}
	else
	{
		printf("the minimum value is:%d\n",b);
	}
}