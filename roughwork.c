#include <stdio.h>
void main()
{
    int date, month;

    printf("Enter date and month to find your zodiac symbol and sign.");

    // Enter Date/month:

    printf("\n\nEnter Birth Date :");
    scanf("%d", &date);

    if (date > 0 && date < 32)
    {
        printf("\nBirth Date is : %d", date);
        
        printf("\n\nEnter Birth Month :");
        scanf("%d", &month);

        if (month > 0 && month < 13)
        {
            printf("\nBirth Month is : %d", month);
        }
        else
        {
            printf("\nInvalid Month.");
        }
    }
    else
    {
        printf("\nInvalid Date.");
    }
}