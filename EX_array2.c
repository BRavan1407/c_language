// write a program to find number of  area for triangle and find biggest triangle.

#include <stdio.h>
void main()
{
    int num;

    printf("Enter numbers of triangles you want to calculate area :");
    scanf("%d", &num);

    float area[num], height[num], base[num];

    int i, big;

    for (i = 0; i < num; i++)
    {

        printf("\nEnter asked details to find area of triangle %d:", (i + 1));

        printf("\nEnter height for triangle %d = ", (i + 1));
        scanf("%f", &height[i]);
        printf("\nEnter base for triangle %d =", (i + 1));
        scanf("%f", &base[i]);

        printf("\nYour entered height is %.2f and base is %.2f.\n", height[i], base[i]);

        area[i] = 0.5 * height[i] * base[i];

        printf("\nArea of triangle %d is %.2f.\n", (i + 1), area[i]);
    }

        big=area[0];
        for (i = 1; i <= num; i++)
        {
            if (area[0]<big)
            {
                area[0]=big;
            }
        }

        printf("The biggest triangle of area is %d", big);
    
}