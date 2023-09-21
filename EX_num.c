//Program to check given number is positive or not?

#include<stdio.h>
void main()
{
    int num;

    printf("Enter number to check given number is positive or nagetive : \nNumber - ");
    scanf("%d",&num);

    if(num>=0)
    {
        printf("\n\nGiven number is positive.");
    }
    else
    {
        printf("\n\nGiven nu,ber is negative.");
    }
}