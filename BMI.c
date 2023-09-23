//Program to find BMI. condition:  https://www.cdc.gov/healthyweight/images/assessing/bmi-adult-fb-600x315.jpg?_=07167

#include<stdio.h>
void main()
{
    float bmi,weight,height,Height;

    printf("\n\nEnter asked values to find your BMI\n\n");

    printf("Please Enter your weight in kilogram :");
    scanf("%f",&weight);

    printf("\nPlease Enter your height in foot : ");
    scanf("%f",&height);

    // printf("\nVerify your given Details : \n");

    printf("You had given %.1f ft height and %.2f kg weight\n",height,weight);

    Height=height*0.3048;
    bmi=weight/(Height*Height);

    printf("\nYour BMI is %.2f",bmi);

    if(bmi<18.5)
    {
        printf("\n\nYou are under weight.");
    }
    else if (bmi>18.5 && bmi<=25)
    {
        printf("\n\nYour weight is normal.");
    }
    else if (bmi>25 && bmi<30)
    {
        printf("\n\nYou are over weight.");
    }
    else if (bmi>=30 && bmi<35)
    {
        printf("\n\nYou are obese.");
    }
    else
    {
        printf("\n\nYou are extremly obese");
    }
    
    
    


}