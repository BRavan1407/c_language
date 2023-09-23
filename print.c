// Print all types of variables
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num1, num2;
    float num3, num4;
    char char1, char2;

    printf("\n\nEnter any two Interger numbers : \n");

    printf("\nNumber 1 - ");
    scanf("%d", &num1);

    printf("\nNumber 2 - ");
    scanf("%d", &num2);

    printf("\nEnter any two Decimal numbers : \n");

    printf("\nNumber 1 - ");
    scanf("%f", &num3);

    printf("\nNumber 2 - ");
    scanf("%f", &num4);

    printf("\nEnter any two Charecters:  ");

    fflush(stdin);
    printf("\nCharecter 1 - ");
    scanf("%c", &char1);
    
    fflush(stdin);
    printf("\nCharecter 2 - ");
    scanf("%c", &char2);

    printf("\nThanks for Visit");
}
