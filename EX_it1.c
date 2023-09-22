/*
Write a programe to findout income tax based on given condition take monthly income as input 
yearly income     tax rate
<3,00,000         5%  

>=3,00,000
<5,00,000         10%  

>=5,00,000
<8,00,000         20%

>=8,00,000        30%  
*/

#include<stdio.h>
void main()
{
    float income,annual,tax;

    printf("\nEnter monthly income :");
    scanf("%f",&income);

    annual=income*12;

    printf("\nYour annual income is %.2f.",annual);

    if(annual<300000)
    {
        tax=(annual*5)/100;
    }
    else if (annual>=300000 && annual<500000)
    {
        tax=(annual*10)/100;
    }
    else if (annual>=500000 && annual<800000)
    {
        tax=(annual*20)/100;
    }
    else if (annual>=800000)
    {
        tax=(annual*30)/100;
    }
    else
    {
        printf("\nPlease enter valid input.");
    }

    printf("\n\nYour final income after deducting tax is %.2f.",annual-tax);
    
    
    

}