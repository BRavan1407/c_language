/*
 *
 **
 ***
 ****
 *****
 ******
 */

#include <stdio.h>
void main()
{
    int a, b;

    b = 1;

    while (b <= 6)
    {
        a = 1;

        while (a <= b)
        {
            printf("*");
            a++;
        }
        printf("\n");
        b++;
    }
}