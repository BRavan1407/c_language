#include <stdio.h>

struct tri
{
    float height;
    float base;
    float area;
};

void triAngle(float base, float height)
{
    float area;

    printf("\nEnter height : ");
    scanf("%f", &height);

    printf("\nEnter base :");
    scanf("%f", &base);

    area = height * base * 0.5;
}

void main()
{
    int num;
    float area;

    printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

    printf("\nEnter asked details to find area of triangle :");

    printf("\nEnter numbers of triangle : ");
    scanf("%d", &num);

    struct tri t[num];

    for (int i = 0; i < num; i++)
    {
        triAngle(t[i].height, t[i].base);
    }

    printf("\n----------Area of entered triangle is %.2f.----------\n\n", area);

    // triAngle(t[1].height, t[1].base);
    // triAngle(t[2].height, t[2].base);
    // triAngle(t[3].height, t[3].base);
    // triAngle(t[4].height, t[4].base);
}