/*
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/

#include <stdio.h>
void main()
{
    int a, b,c;

    b = 1;

    c=1;

    while (b <= 5)
    {
        a = 5;

        while (a >= c)
        {
            printf("%d ",a);
            a--;

        }

        printf("\n");

        b++;
        c++;

    }
}