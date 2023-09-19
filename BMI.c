//Program to find BMI of human

#include<stdio.h>
void main()
{
    float bmi,weight,height,Height;

    printf("\n\nEnter asked values to find your BMI\n\n");

    printf("Please Enter your weight in kilogram with decimal :");
    scanf("%f",&weight);

    printf("\nPlease Enter your height in foot with decimal : ");
    scanf("%f",&height);

    // printf("\nVerify your given Details : \n");

    printf("You had given %.1f ft height and %.2f kg weight\n",height,weight);

    Height=height*0.3048;
    bmi=weight/(Height*Height);

    printf("\nYour BMI is %.2f",bmi);

}