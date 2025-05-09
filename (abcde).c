#include<stdio.h>

int main()
{ 
int a,b,c,d,e;

	printf("enter the number a:");
	scanf("%d",&a);
	
	printf("enter the number b:");
	scanf("%d",&b);
	
	printf("enter the number c:");
	scanf("%d",&c);
	
	printf("enter the number d:");
	scanf("%d",&d);
	
	printf("enter the number e:");
	scanf("%d",&e);
	
	if(a<b)
	{
		if(a<c)
		{
		    if(a<d)
			{
				if(a<e)
				{
				   printf("a is the maximum number");	
				}
				else
				{
				   printf("e is the maximum number");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is the maximum number");
				}
				else
				{
					printf("e is the maximum number");
				}
			}
		}
		else
	    {
	    	if(c<d)
	    	{
	    		if(c<e)
	    		{
	    			printf("c is the maximum number");
				}
				else
				{
					printf("e is the maximum number");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is the maximum number");
				}
				else
				{
					printf("e is the maximum number");
				}
			}
		}
	}
    else
    {
    	if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("b is the maximum number");
				}
				else
				{
					printf("e is the maximum number");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is the maximum number");
				}
				else
				{
					printf("e is the maximum number");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("c is the maximum number");
				}
				else
				{
					printf("e is the maximum number");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is the maixmum number");
				}
				else
				{
					printf("e is the maximum number");
				}
			}
		}
	}
}