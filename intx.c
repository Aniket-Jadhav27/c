#include<stdio.h>
int main()
{
	int x ,y;
	int a ,b,c;
	printf("enter a number x:\n");
	scanf("%d",&x);

    printf("enter a number y:\n");
	scanf("%d",&y);

	a=x*x;
	b=a+2*x;
    c=(x*x*x+3*(x*x)+4*x+y*y*y);
	printf("square of x %d\n",a);
	printf("ans of a+2x %d",b);

    printf("ans of x^3+3x^2+4x-y^3 %d",c);
	return 0;
	}	
