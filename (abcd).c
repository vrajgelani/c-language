#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("enter the number a:");
	scanf("%d",&a);
	
	printf("enter the number b:");
	scanf("%d",&b);
	
	printf("enter the number c:");
	scanf("%d",&c);
	
	printf("enter the number d:");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
		   if(a>d)
		   {
		   	printf("a is the maximum number");
		   }
		   else
		   {
		   	printf("d is the maximum number");
		   }
		}
		else
		{
		   if(c>d)
		   {
		   	printf("c is the maximum number");
		   }
		   else
		   {
	   	    printf("d is the maximum number");
		   }	
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
			   printf("b is the maximum number");
			}
			else
			{
				printf("d is the maximum number");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is the maximum number");
			}
			else
			{
				printf("d is the maximum number");
			}
		}
		
	}
	  
}