//program to  findout small  area of two  triangle.

#include<stdio.h>
void main()
{
    float area,h,b,area1,h1,b1;

    printf("Enter details for triangle 1 :\n");

    printf("\nEnter height :");
    scanf("%f",&h);
    printf("\nEnter Base :");
    scanf("%f",&b);

    area=0.5*h*b;

    printf("\nArea of triangle 1 : %.2f",area);
    
    printf("\n\nEnter details for triangle 2 :\n");

    printf("\nEnter height :");
    scanf("%f",&h1);
    printf("\nEnter Base :");
    scanf("%f",&b1);

    area1=0.5*h1*b1;

    printf("\nArea of triangle 2 : %.2f",area1);

    if(area1>area)
    {
        printf("\nArea of triangle 1 is smaller then triangle 2.");
    }
    else
    {
        printf("\nArea of triangle 2 is smaller then triangle ");
    }

}