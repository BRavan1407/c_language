#include<stdio.h>
void main()
{
    int a,b,c;

    printf("\nEnter two numbers for swaping : \n");

    printf("\nNumber 1 -");
    scanf("%d",&a);
    printf("\nNumber 2 -");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("\nAfter Swapping :");

    printf("\nNumber 1 - %d",a);

    printf("\nNumber 2 - %d",b);



}