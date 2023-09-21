//Program to check if the given number is leap year or not.

#include<stdio.h>
void main()
{
    int year;

    printf("Enter year to check leap year or not :");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("\n\nThis is a leap year");

    }
    else{
        printf("\n\nThis is not a leap year");
    }
}