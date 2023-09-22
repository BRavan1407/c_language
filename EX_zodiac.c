//Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.

#include<stdio.h>
void main()
{
    int date,month;

    printf("Enter date and month to find your zodiac symbol and sign.");

    printf("\n\nEnter Date :");
    scanf("%d",&date);

    if(date>0 && date<32)
    {
        printf("\nDate is : %d",date);
    }
    else
    {
        printf("\nInvalid Date.");

    }

    printf("\nEnter Month :");
    scanf("%d",&month);

    
    if(month>0 && month<13)
    {
        printf("\nMonth is : %d",month);
    }
    else
    {
        printf("\nInvalid Month.");
    }

    if(date>=19 && date<=21 && month==3 && month==4)
    {
        printf("\n\nYour Zodiac sign is 'Aaries' and symbol is 'The Ram'");

    }
    else if (date>19 && date<21 && month==4 && month==5)
    {
        printf("\n\nYour Zodiac sign is 'Taurus' and symbol is 'The Bull'");
    }
    else if (date>19 && date<22 && month==5 && month==6)
    {
        printf("\n\nYour Zodiac sign is 'Gemini' and symbol is 'The Twins'");
    }
    else if (date>20 && date<23 && month==6 && month==7)
    {
        printf("\n\nYour Zodiac sign is 'Cancer' and symbol is 'The Crab'");
    }
    else if (date>21 && date<24 && month==7 && month==8)
    {
        printf("\n\nYour Zodiac sign is 'Leo' and symbol is 'The Lion'");
    }

    else
    {
        printf("\nInvalid");
    }
   
    
    
    
    
    


}