//Program to check Income tax. If income is morethen 5lakh tax is 5% else print as it is.

#include<stdio.h>
void main()
{
    float income,tax,annual;

    printf("Enter monthly income :");
    scanf("%f",&income);
    annual=income*12;
    printf("\nYour annual income is %.2f",annual);

    if(annual>500000)
    {
        tax=(annual*5)/100;
        printf("\nYour final income is %.2f",annual-tax);
    }
    else
    {
        printf("\nYour final income is %.2f",annual);
    }
}