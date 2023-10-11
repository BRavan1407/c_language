/*
* * * * * *
*       *
*     *
*   *
* *
*

*/

// This program had a error

#include <stdio.h>
void main()
{
    int a, b, c;

    c = 6;

    for (b = 1; b <= 6; b++)
    {
        for (a = 1; a <= b; a++)
        {
            printf("* ");
            c--;
        }
        printf("\n");
    }
}