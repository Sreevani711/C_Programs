#include<stdio.h>
void main()
{
    int i,n,sum=0,count;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=0,count=1; count<=n; i=i++,count++)
    {
    sum=sum+i;
    }
    printf("sum=%d", sum);
}