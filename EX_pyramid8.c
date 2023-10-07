/*
 * * * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 */

#include <stdio.h>
void main()
{
    int a, b,c;

    b = 1;
    c=6;

    while (b <= 6)
    {
        a = 1;

        while (a <= b)
        {
            printf(" ");
            a++;
        }

        a = 1;

        while (a <= c)
        {
            printf("* ");
            a++;
        }

        printf("\n");

        b++;
        c--;
    }
}