// Program to find area of multiple triangles using structure , array and function.

#include <stdio.h>

struct triangle
{
    float area, height, base;
};

float triangleArea(float height, float base)
{
    float area;

    printf("\nEnter asked details to find area of triangle :\n");

    printf("\nEnter height :");
    scanf("%f", &height);

    printf("\nEnter base :");
    scanf("%f", &base);

    area = height * base * 0.5;

    printf("\n\n||||||||||||||||||||||||||| Area of Entered triangle is %.2f. |||||||||||||||||||||||||||\n\n", area);

    return area;
}
void main()
{
    int num;
    printf("\nEnter number of triangle :");
    scanf("%d", &num);

    // for (int i = 1; i <=num; i++)
    // {
    // }

    struct triangle T[num];

    for (int i = 0; i < num; i++)
    {
        printf("\nDetails for triangle %d.", (i + 1));

        triangleArea(T[i].height, T[i].base);
    }
}