/*
* * * * * *
*       *
*     *
*   *
* *
*

*/

#include <stdio.h>
void main()
{
    int a, b, c;

    c = 6;

    for (b = 1; b <= 6; b++)
    {
        for (a = 1; a <= c; a++)
        {
            if (a == 1 || b == 1 || a == c)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
        c--;
    }
}