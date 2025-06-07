#include<stdio.h>
void main()
{
    float i,n,sum=0;
    float avg;
    printf("Enter the value of n:");
    scanf("%f", &n);
    for (i=1; i<=n; i++)
sum = sum+i;
avg=sum/n;
printf("sum=%5.2f", sum);
printf("avg=%5.2f",avg);
}