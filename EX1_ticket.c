//Ticket Price Calculator:  age less then 15 price 10 Rp  age 15 to 18 price 15Rp and greater then 18 price 20.

#include<stdio.h>
void main()
{
    int age;

    printf("\nEnter your age to find value of ticket :");

    printf("\nYour Age :");
    scanf("%d",&age);

    if(age<15)
    {
        printf("\nPrice for your ticket is 10 rs.");
    }
    else if (age>=15 && age<=18)
    {
        printf("\nPrice for your ticket is 15 rs.");
    }
    else if (age>18)
    {
        printf("\nPrice for your ticket is 20 rs.");
    }
    else
    {
        printf("\nPlease enter valid age.");
    }
    
    
}