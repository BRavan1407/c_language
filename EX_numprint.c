//program to Print from number to to number. Input from user.

#include<stdio.h>
void main()
{
    int num,start,end;

    printf("\nEnter starting number :");
    scanf("%d",&start);
    printf("\nEnter Ending number :");
    scanf("%d",&end);

    num=start;

    printf("\n\nYour Entered series is :\n\n");


    while (num<=end)
    {
        printf(" %d ,",num);
        num=num+1;
    }
    
}