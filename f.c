#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	
	if(num<0)
		printf("%d it is negative",num);
	else if(num>0)
		printf("%d it is positive",num);
	else
		printf("%d it is zero",num);
	
	return 0;
	}
	
	


