#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:\n",n);
    
    int i;
    for(i=0;i<=n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
      sum=sum+a[i];
      a[i]=sum;
    }
    printf("running sum of elements:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;

}