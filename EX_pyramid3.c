/*

* * * * * *
*        *
*      *
*    *
*  * 
*

*/

#include <stdio.h>
void main()
{
    int a, b, c;

    b = 1;

    c = 6;
    while (b <= 6)

    {
        a = 1;

        while (a <= c)
        {
            if (b == 1 || a == 1 || a == c)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            a++;
        }
        printf("\n");
        c--;

        b++;
    }
}