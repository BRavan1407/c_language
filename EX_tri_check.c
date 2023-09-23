//Check if a triangle is equilateral, isosceles, or scalene. (lenth)

#include<stdio.h>
void main()
{
    int side1,side2,side3;

    printf("\nFor check triangle type enter sides :");

    printf("\nSide1 :");
    scanf("%d",&side1);
    printf("\nSide2 :");
    scanf("%d",&side2);
    printf("\nSide3 :");
    scanf("%d",&side3);

    printf("\nThe sides of triangle are %d,%d and %d",side1,side2,side3);

    if(side1==side2 && side2==side3 && side3==side1)
    {
        printf("\nGiven triangle is equilateral.");
    }
    else if (side1==side2 || side2==side3 || side3==side1)
    {
        printf("\nGiven triangle is isosceles.");
    }
    else
    {
        printf("\nGiven triangle is scalene.");
    }
    

}