//write a program to check number is odd or even or zero.

#include<stdio.h>
void main()
{
    int num;
    printf("Enter numbere to check number is odd or even :");

    printf("\n\nNumber :");
    scanf("%d",&num);

    if(num>0)
    {
        printf("\nNumber is positive.");

    }
    else if (num==0)
    {
        printf("\nNumber is zero.");
    }
    else
    {
        printf("\nNumber is Negative");
    }

    printf("\nVisit again !");
    
}