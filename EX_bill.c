//Program to find electricity bill.(4.5/unit)

#include<stdio.h>
void main()
{
    float bill,unit,rs_unit,gst;

    printf("\nEnter asked values to find electricity bill :");

    printf("\nEnter unit :");
    scanf("%f",&unit);

    printf("\nEnter RS/unit :");
    scanf("%f",&rs_unit);

    printf("\nEnter GST :");
    scanf("%f",&gst);

    printf("\n\nYou had given %.2f units at %.2f rs/unit with %.1f percent of GST.",unit,rs_unit,gst);

    bill=(unit*rs_unit);
    gst=(bill*gst)/100;

    printf("Your final amount of Bill : %.2f",bill+gst);


}