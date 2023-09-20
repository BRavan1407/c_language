#include<stdio.h>
void main()
{
    int num1,num2;

    printf("Enter two numbers for swaping :\n");

    printf("\nNumber 1 - ");
    scanf("%d",&num1);

    printf("\nNumber 2 - ");
    scanf("%d",&num2);

    printf("\nYou had entered %d and %d",num1,num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("\n\nAfter swaping : \n");

    printf("\nNumber 1 - %d",num1);

    printf("\n\nNumber 2 - %d",num2);

    printf("\nAfter swaping numbers are %d and %d",num1,num2);
}