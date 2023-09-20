//Program for multiplication Table.

#include<stdio.h>
void main()
{
    float num,ans;

    //5x1=5

    printf("\n\nEnter table number : ");
    scanf("%f",&num);

    ans=num*1;
    printf("\n\n%.2f x 1 = %.2f",num,ans);

    ans=num*2;
    printf("\n\n%.2f x 2 = %.2f",num,ans);

    ans=num*3;
    printf("\n\n%.2f x 3 = %.2f",num,ans);

    ans=num*4;
    printf("\n\n%.2f x 4 = %.2f",num,ans);

    ans=num*5;
    printf("\n\n%.2f x 5 = %.2f",num,ans);

    ans=num*6;
    printf("\n\n%.2f x 6 = %.2f",num,ans);

    ans=num*7;
    printf("\n\n%.2f x 7 = %.2f",num,ans);

    ans=num*8;
    printf("\n\n%.2f x 8 = %.2f",num,ans);

    ans=num*9;
    printf("\n\n%.2f x 9 = %.2f",num,ans);

    ans=num*10;
    printf("\n\n%.2f x 10 = %.2f\n\n",num,ans);
}