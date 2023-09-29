//Program to print even numbers using while loop.(Like : 2,4,6,8,......300)

#include<stdio.h>
void main()

{
    int num;

    num=2;

    while (num<=300)
    {
        printf(" %d ,",num);
        num=num+2;
    }
    
}