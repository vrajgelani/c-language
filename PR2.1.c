#include<stdio.h>

int main()
{
	int score;
	char a,b,c,d,e,f;
	
	printf("enter the score: ");
	scanf("%d",&score);
    
	if(score>=90)
	{
		printf("your grade is A");
	}
	
    else if(score>=80)
	{
		printf("your grade is B");
	}
	
	else if(score>=70)
	{
		printf("your grade is C");
	}
	
	else if(score>=60)
	{
		printf("your grade is D");
	}
	
    else if(score>=50)
	{
		printf("your grade is E");
	}
	
	else if(score>=40)
	{
		printf("your grade is F");
	}
	
	printf("%c\n",a,b,c,d,e,f);
	
	printf("congratulations");
}
/*
input:score:68
output:grade:D
*/