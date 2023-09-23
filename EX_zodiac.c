// Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.

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

    // Conditions :

    {

        if (date > 20 && date <= 31 && month == 3 || date >= 1 && date < 20 && month == 4)
        {
            printf("\n\nYour Zodiac sign is 'Aaries' and symbol is 'The Ram'");
        }
        else if (date > 19 && date < 31 && month == 4 || date >= 1 && date < 21 && month == 5)
        {
            printf("\n\nYour Zodiac sign is 'Taurus' and symbol is 'The Bull'");
        }
        else if (date > 20 && date <= 31 && month == 5 || date >= 1 && date < 21 && month == 6)
        {
            printf("\n\nYour Zodiac sign is 'Gemini' and symbol is 'The Twins'");
        }
        else if (date > 20 && date < 31 && month == 6 || date >= 1 && date <= 22 && month == 7)
        {
            printf("\n\nYour Zodiac sign is 'Cancer' and symbol is 'The Crab'");
        }
        else if (date > 22 && date <= 31 && month == 7 || date >= 1 && date <= 22 && month == 8)
        {
            printf("\n\nYour Zodiac sign is 'Leo' and symbol is 'The Lion'");
        }
        else if (date > 22 && date <= 31 && month == 8 || date >= 1 && date <= 22 && month == 9)
        {
            printf("\n\nYour Zodiac sign is 'Virgo' and symbol is 'The Virgin'");
        }
        else if (date > 22 && date < 31 && month == 9 || date >= 1 && date <= 22 && month == 10)
        {
            printf("\n\nYour Zodiac sign is 'Libra' and symbol is 'The Scales'");
        }
        else if (date > 22 && date <= 31 && month == 10 || date >= 1 && date < 22 && month == 11)
        {
            printf("\n\nYour Zodiac sign is 'Scorpio' and symbol is 'The Scorpion'");
        }
        else if (date >= 22 && date < 31 && month == 11 || date >= 1 && date < 22 && month == 12)
        {
            printf("\n\nYour Zodiac sign is 'Sagittarius' and symbol is 'The Archer'");
        }
        else if (date >= 22 && date <= 31 && month == 12 || date >= 1 && date < 20 && month == 1)
        {
            printf("\n\nYour Zodiac sign is 'Capricorn' and symbol is 'The Goat'");
        }
        else if (date >= 20 && date <= 31 && month == 1 || date >= 1 && date < 19 && month == 2)
        {
            printf("\n\nYour Zodiac sign is 'Aquarius' and symbol is 'The Water Bearer'");
        }
        else if (date >= 19 && date <= 29 && month == 2 || date >= 1 && date < 21 && month == 3)
        {
            printf("\n\nYour Zodiac sign is 'Pisces' and symbol is 'The Fishes'");
        }
        else
        {
            printf("\nYour entered date or month does not match.");
        }
    }
}