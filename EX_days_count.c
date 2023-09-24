//Program to calculate days from taking input of month and year.

#include<stdio.h>
void main()
{
    int days,month,year;

    printf("Enter Month and year to calculate days of that month :");

    printf("\n\nEnter year :");
    scanf("%d",&year);
    printf("\nEnter Month :");
    scanf("%d",&month);

    printf("\nYou Entered month : %d and Year : %d .",month,year);

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("\n\nThe days of this month are 31.");
    }
    else if (month==4 || month==6 || month==9 || month==11)
    {
        printf("\n\nThe days of this month are 30.");
    }
    else if (month==2)
    {
        if (year%4==0)
        {
            printf("\n\nThis is a Leap Year so The days of this month are 29.");
        }
        else
        {
            printf("\n\nThe days of this month are 28.");
        }
        
    }
    else
    {
        printf("\n\nPlease Enter a Valid Input.");
    }
    
}