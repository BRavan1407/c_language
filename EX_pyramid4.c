/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

#include <stdio.h>
void main()
{
    int a, b;

    b = 1;

    while (b <= 5)
    {
        a = 1;

        while (a <= b)
        {
            printf("%d ",b);
            a++;
        }
        printf("\n");

        b++;
    }
}