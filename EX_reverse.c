//Program to print reverse numbers.

#include<stdio.h>
void main()
{
    int num,start,end;

    printf("This program will print numbers in reverse order.");
    printf("\nEnter starting number :");
    scanf("%d",&start);
    printf("\nEnter Ending number :");
    scanf("%d",&end);

    printf("\nYour series is : \n\n");
    num=start;

    while(num>=end)    
    {
        printf(" %d",num);
        num=num-1;

    }

    printf("\nThank You for Visit.");
    
}