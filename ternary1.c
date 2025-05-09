#include<stdio.h>

int main()
{
	int a,b,c,min;
	
	printf("enter the velue of a:");
	scanf("%d",&a);
	
	printf("enter the velue of b:");
	scanf("%d",&b);
	
	printf("enter the velue of c:");
	scanf("%d",&c);
	
	min=(a<b)?((a<c)?a:c) : ((b<c)?b:c);
	
	printf("the minimum number is:%d\n",min);
}