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

    for (b = 1; b <= 6; b++)
    {
        for (a = 1; a <= b; a++)
        {
            printf("* ");
        }

        printf("\n");
    }
}