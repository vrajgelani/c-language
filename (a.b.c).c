#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter the value of a:");
	scanf("%d",&a);
	
	printf("enter the valu of b:");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("after swpping:\n");
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	
}