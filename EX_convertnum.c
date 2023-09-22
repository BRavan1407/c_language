//write a program to check number negetive or not ,if negetive to convert int to possitive.

#include<stdio.h>
void main()
{
    int num;

    printf("Enter number to check if it's a negative or not ? ");

    printf("\nNumber :");
    scanf("%d",&num);

    if(num>0)
    {
        printf("\nNumber is positive. Value of number is %d",num);

    }
    else if (num==0)
    {
        printf("\nNumber is zero.");

    }
    else
    {
        num=num*(-1);
        printf("\nNumber is negative. Convereted number value is %d.",num);
    }
    
}