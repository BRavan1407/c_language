//Program to find simple interest.

#include<stdio.h>
void main()
{
    float simple_interest,amount,interest,time;

    printf("Enter asked values for find Simple Interest :");

    printf("\n\nEnter Principle Amount : ");
    scanf("%f",&amount);

    printf("\nEnter rate of interest :");
    scanf("%f",&interest);

    printf("\nEnter time in year :");
    scanf("%f",&time);

    printf("\n\nYou had entered %.2f of amount with %.2f percent of interest for %.1f year.",amount,interest,time);

    simple_interest=(amount*interest*time)/100;

    printf("\n\nSimple interest of given Values :%.2f",simple_interest);

}