#include<stdio.h>
void main()
{
int i,n,count;
printf("Enter the value of n:");
scanf("%d",&n);
for(i=1, count=1; count<=n; i=i+2,count++)
printf("%d \n", i);
}
