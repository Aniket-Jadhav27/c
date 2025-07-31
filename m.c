#include <stdio.h>
int main()
{
	int a, b;
	
	printf("enter first number:");
	scanf("%d", &a);
	printf("enter second number:");
	scanf("%d", &b);
	
	
	printf("print before swaping: a=%d, b=%d\n", a, b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping: a=%d, b=%d\n", a, b);
	
	return 0;
}

