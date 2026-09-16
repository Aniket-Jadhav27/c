#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    int count=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    int i;
    for(i=0;i<=n;i++)
    {
        if((i%3==0)!=(i%5==0))
        {
            printf("%d\n",i);
            count++;
            sum=sum+i;
        }
    }
    printf("count is:%d\n",count);
    printf("Sum is %d\n",sum);
}