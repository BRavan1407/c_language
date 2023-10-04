// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 300.

#include <stdio.h>
void main()
{
    int num, num1;

    num = 2;
    num1 = 1;

    while(num<=123)

    {
        printf(" %d,", num);
        num = num + num1;
        printf(" %d,", num1);
        num1=num+num1;
    }
}