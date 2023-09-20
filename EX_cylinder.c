//Program to find area of cylinder. (Formula = 2(pi)rh+2(pi)r*r)

#include<stdio.h>
void main()
{
    float area,radius,height,pi;
    pi=3.14159;

    printf("Enter asked values to find area of cylinder : ");

    printf("\n\nEnter radius : ");
    scanf("%f",&radius);

    printf("\nEnter Height : ");
    scanf("%f",&height);

    area=(2*pi*radius*height)+(2*pi*(radius*radius));

    printf("\n\nArea of cylinder is %.2f.\n",area);
}