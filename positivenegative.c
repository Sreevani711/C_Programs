#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n==0)
    printf("n is neither positive nor negative");
    else if(n>0)
    printf("n is positive");
    else
    printf("n is negative");
    return 0;
}