#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:\n",n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    printf("Before:\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",a[i]);
    }
   
    for(i=0;i<n;i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("after is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}