#include<stdio.h>

int main()
{
	float ac,stat,ba,eco,sp,eng,guj,average;
	char grade;
	
	printf("enter marks for subject AC:");
	scanf("%f",&ac);
	
	printf("enter marks for subject STAT:");
	scanf("%f",&stat);
	
    printf("enter marks for subject B.A.:");
	scanf("%f",&ba);
	
	printf("enter marks for subject ECO:");
	scanf("%f",&eco);
	
	printf("enter marks for subject S.P.:");
	scanf("%f",&sp);
	
	printf("enter marks for subject ENG:");
	scanf("%f",&eng);
	
	printf("enter marks for subject GUJ:");
	scanf("%f",&guj);
	
	average=(ac+stat+ba+eco+sp+eng+guj)/7;
	
	if(average>=90)
	{
		grade='A1';
	}
	else if(average>=80)
	{
		grade='A2';
	}
	else if(average>=70)
	{
	    grade='B1';
	}
	else if(average>=60)
	{
		grade='B2';
	}
	else if(average>=50)
	{
		grade='C';
	}
	else if(average>=33)
	{
		grade='D';
	}
	else
	{
		grade='E';
	}
	
	printf("Average mark:%.2f\n",average);
	printf("grade:%2c\n",grade);
}