#include<stdio.h>

int main()
{
	int score;
	char grade;
	
	printf("enter your score:");
	scanf("%d",&score);
	
	if(score>=90)
	{
		grade='A';
	}
	else if(score>=80)
	{
		grade='B';
	}
	else if(score>=70)
	{
		grade='C';
	}
	else if(score>=60)
	{
		grade='D';
	}
	else if(score>=50)
	{
		grade='F';
	}
	
	printf("your grade is %c.\n",grade);
	
	switch(grade)
	{
		case'A':
		printf("excellent work!\n");
		break;
		
		case'B':
	    printf("well done.\n");
	    break;
	    
	    case'C':
		printf("good job.\n");
		break;
		
		case'D':
		printf("your passed,but you could do better.\n");
		break;
		
		case'F':
		printf("sorry,you failed in c language.\n");
		break;
		
		default:
		printf("invalid grade");
		
    }  
		if(grade=='A'|| grade=='B'||grade=='C'||grade=='D')
		{
			printf("congratulations!\n");
		}
		else
		{
			printf("please try again next time .\n");
		}
}
/*
input:score:68
output:grade:d
      :well done.
*/