#include<stdio.h>
void main()
{
int daynumber;
printf("Enter the daynumber:");
scanf("%d", &daynumber);
switch (daynumber)
{
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("wednesday");
    break;
    case 4:
    printf("thursday");
    break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
case 7:
printf("sunday");
break;
default:
printf("invalid entry");
}
}
