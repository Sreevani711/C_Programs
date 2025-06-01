#include<stdio.h>
void main()
{
    char a;
    printf("Enter a:");
    scanf("%c",&a);
    if ((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u'))
    printf("a is a vowel");
    else
    printf("a is a consonant");
}