#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter the number a:");
	scanf("%d",&a);
	
	printf("enter the number b:");
	scanf("%d",&b);
	
	printf("enter the number c:");
	scanf("%d",&c);
	
	if(a>b)
	{
	 if(a>c)
	 printf("a is minimum number");
	 else
	printf("c is minimum number");
	}
	else
	{if(b>c)
	printf("b is minimum number");
	else
	printf("c is minimum number");
	}
}