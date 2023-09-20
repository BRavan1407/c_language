//Program to find area of triangle.

#include<stdio.h>
void main()
{
    float area,height,base;

    printf("Enter given details to find area of triangle :\n\n");

    printf("Enter Height :");
    scanf("%f",&height);

    printf("\nEnter base :");
    scanf("%f",&base);

    printf("\n\nYou had entered height %.2f and base %.2f",height,base);

    area=0.5*height*base;

    printf("\n\nArea of Triangle is = %.2f",area);

}