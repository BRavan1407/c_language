//Program to check smaller number.

#include<stdio.h>
void main()
{
    int num1,num2;

    printf("Enter numbers to check which number is smaller :");

    printf("\n\nNumber 1 - ");
    scanf("%d",&num1);

    printf("\nNumber 2 - ");
    scanf("%d",&num2);

    printf("\nYou had entered %d and %d .",num1,num2);

    if(num1<num2)
    {
        printf("\nNumber 1 is smaller then Number 2.");

    }
    else
    {
        printf("\nNumber 2 is smaller then Number 1.");
    }

    printf("\n\n-----Thanks for visit-----\n\n");


}