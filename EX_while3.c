// 1 , 8 , 27 , 64 ,125,...1000

#include <stdio.h>
void main()
{
    int num, temp;

    num = 1;
    temp=1;

    while(num<=1000)
    {

        printf(" %d,", num);
        temp++;
        num = temp*temp*temp;
        

        
    }
}