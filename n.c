#include <stdio.h>
int main()
{
	int num1, num2, result;
	printf("enter the first intiger:");
	scanf("%d", &num1);
	printf("enter the second intiger:");
	scanf("%d", &num2);
	
	result=num1+num2;
	printf("addition : %d+%d=%d\n", num1, num2, result);
	
	result=num1-num2;
	printf("subtraction : %d-%d=%d\n", num1, num2, result);
	
	result=num1*num2;
	printf("multiplication : %d*%d=%d\n", num1, num2, result);
	
	return 0;
}
