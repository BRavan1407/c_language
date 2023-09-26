// Write a program to saperate two digit number and print both in words. (EX=25 => two and five)

#include <stdio.h>
void main()
{
    int num, first, second;

    printf("\nEnter any two digit number to saperate that in words :");

    printf("\nYour Number :");
    scanf("%d", &num);

    if (num > 9 && num < 100)
    {
        printf("\nYour entered number is %d.", num);

        first = num / 10;
        second = num % 10;

        printf("\n\nAfter saperation your first digit is %d and second digit is %d.", first, second);

        printf("\nBoth are in words :");

        switch (first) 
        {
        case 0:
            printf("\nZero");
            break;

        case 1:
            printf("\nOne");
            break;

        case 2:
            printf("\nTwo");
            break;

        case 3:
            printf("\nThree");
            break;

        case 4:
            printf("\nFour");
            break;

        case 5:
            printf("\nFive");
            break;

        case 6:
            printf("\nSix");
            break;

        case 7:
            printf("\nSeven");
            break;

        case 8:
            printf("\nEight");
            break;

        case 9:
            printf("\nNine");
            break;

        default:
            printf("\nInvalid Number.");
            break;
        }

        switch (second)
        {
        case 0:
            printf("\nZero");
            break;

        case 1:
            printf("\nOne");
            break;

        case 2:
            printf("\nTwo");
            break;

        case 3:
            printf("\nThree");
            break;

        case 4:
            printf("\nFour");
            break;

        case 5:
            printf("\nFive");
            break;

        case 6:
            printf("\nSix");
            break;

        case 7:
            printf("\nSeven");
            break;

        case 8:
            printf("\nEight");
            break;

        case 9:
            printf("\nNine");
            break;

        default:
            printf("\nInvalid Number.");
            break;
        }
    }
    else
    {
        printf("\nPlease enter valid number.");
    }
}