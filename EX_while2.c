// 1 4 9 16 25 ...10000

#include <stdio.h>
void main()
{
    int num, temp;

    num = 1;
    temp = 1;

    while (num <= 10000)
    {
        printf(" %d ,", num);
        temp = temp + 2;
        num = num + temp;
    }
}