#include<stdio.h>
void main()
{
    int i,n,d, sum=0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    while(n>0)
    {
d=n%10;
sum=sum+d;
n=n/10;
    }
    printf("sum=%d",sum);
}