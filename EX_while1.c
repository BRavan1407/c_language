//1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 10000

#include<stdio.h>
void main()
{
    int num,temp;

    num=1;
    temp=1;
    
    while(num<=10000)    
    {
        printf(" %d,",num);
        temp=temp+4;
        num=num+temp;
 
    }
}