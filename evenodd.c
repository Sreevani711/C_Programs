#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    if(n==0)
    printf("n is neither even nor odd");
    else if(n%2==0)
    printf("n is even");
    else
    printf("n is odd");
}
