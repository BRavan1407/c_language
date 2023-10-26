// Program to find days from date to, to date.

#include <stdio.h>

struct dmy
{
    int date, month, year, temp;
};

// From Date :

int fromDate(struct dmy From)
{

    printf("\n************** : From Date : **************\n");

    printf("Enter From Date :\n ");

    printf("\nEnter Date : ");
    scanf("%d", &From.date);

    printf("Enter Month : ");
    scanf("%d", &From.month);

    printf("Enter Year : ");
    scanf("%d", &From.year);

    if (From.date > 0 && From.date <= 31 && From.month > 0 && From.month <= 12 & From.year > 0)
    {
        printf("\n||||||||||||||| Your Entered date is %d-%d-%d. |||||||||||||||\n\n", From.date, From.month, From.year);
    }
    else
    {
        printf("\nPlease enter valid date, month & year.");
    }

    return From.date, From.month, From.year;
}

// To Date :

int toDate(struct dmy To)
{

    printf("\n************** : To Date : **************\n");

    printf("Enter To Date :\n ");

    printf("\nEnter Date : ");
    scanf("%d", &To.date);

    printf("Enter Month : ");
    scanf("%d", &To.month);

    printf("Enter Year : ");
    scanf("%d", &To.year);

    if (To.date > 0 && To.date <= 31 && To.month > 0 && To.month <= 12 & To.year > 0)
    {
        printf("\n||||||||||||||| Your Entered date is %d-%d-%d.|||||||||||||||\n\n", To.date, To.month, To.year);
    }
    else
    {
        printf("\nPlease enter valid date, month & year.");
    }

    return To.date, To.month, To.year;
}

void main()
{
    struct dmy from, to;

    printf("\nThis program will find days - from date to, to date.\n");

    fromDate(from);

    toDate(to);

    printf("\n-----------------------------------------------\n\n");

    printf("----- : Difference between these two dates : -----\n\n");

    printf("%d\n", from.date);
    printf("%d", to.date);

    // printf("From date : %d-%d-%d\n", from.date, from.month, from.year);
    // printf("To Date   : %d-%d-%d", to.date, to.month, to.year);
}