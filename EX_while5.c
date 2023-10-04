// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000

#include <stdio.h>
void main()
{
    int num,temp;

    num = 1;
    temp=1;

    while(num<=3000)
    {
        printf(" %d ,", num);
        temp=temp+3;
        num = num + temp;
        
    }
}