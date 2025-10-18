#include<stdio.h>
int main(){
    int a, b;

    printf("enter two numbers:");
    scanf("%d%d", & a , &b);

    printf("addition=%d\n", a+b);

    printf("subtraction=%d\n", a-b);

    printf("multiplication=%d\n", a*b);

    if(b!=0){
        printf("division=%d\n", a/b);
    
    } else {
        printf("division by zero is not allowed.\n");
    }

    return 0;
}