#include<stdio.h>

int main()
{
	float x,y,result;
	
	printf("enter the value of x:");
	scanf("%f",&x);
	
	printf("enter the value of y:");
	scanf("%f",&y);
	
	result=(x+y)*(x+y);
	
	printf("the resul of (x+y)*(x+y)is:%f\n",result);
}
/*
input:x=12
      y=12
output:result=576
*/