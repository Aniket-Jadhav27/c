#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the values a and b:\n");
  scanf("%d %d", &a,&b);
  int sub=a-b;
  printf("sub is %d",sub);
  return 0;
}