/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>
void main()
{
    int a, b, c;

    b = 1;

    c = 1;

    while (b <= 5)
    {
        a = 1;

        while (a <= b)
        {
            printf("%d ", c);
            a++;
            c++;
        }
        printf("\n");

        b++;
    }
}