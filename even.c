#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter n:");
    scanf("%d", &n);
    for (i=0; i<=n; i=i+2)
    printf("%d ", i);
}