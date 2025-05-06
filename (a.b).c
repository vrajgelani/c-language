#include<stdio.h>

int main()
{
	int a = 10,b = 15;
	
	printf("before swapping:\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\n after swapping:\n");
	printf("a= %d\n", a);
	printf("b= %d\n", b);
}