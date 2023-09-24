// write  program to find area of three triangle and check smaller .

#include <stdio.h>
void main()
{
    float area1, area2, area3, height, base;

    // Triangle 1

    printf("Enter given details to find area of triangle 1 :\n\n");

    printf("Enter Height :");
    scanf("%f", &height);

    printf("\nEnter base :");
    scanf("%f", &base);

    printf("\n\nYou had entered height %.2f and base %.2f", height, base);

    area1 = 0.5 * height * base;

    printf("\n\nArea of Triangle 1 is = %.2f", area1);

    // Triangle 2

    printf("\n\nEnter given details to find area of triangle 2 :\n\n");

    printf("Enter Height :");
    scanf("%f", &height);

    printf("\nEnter base :");
    scanf("%f", &base);

    printf("\n\nYou had entered height %.2f and base %.2f", height, base);

    area2 = 0.5 * height * base;

    printf("\n\nArea of Triangle 2 is = %.2f", area2);

    // Triangle 3

    printf("\n\nEnter given details to find area of triangle 3 :\n\n");

    printf("Enter Height :");
    scanf("%f", &height);

    printf("\nEnter base :");
    scanf("%f", &base);

    printf("\n\nYou had entered height %.2f and base %.2f", height, base);

    area3 = 0.5 * height * base;

    printf("\n\nArea of Triangle 3 is = %.2f", area3);

    // Conditions

    if (area1 < area2)
    {
        if (area1 < area3)
        {
            printf("\n\nArea of triangle 1 is smaller.");
        }
        else
        {
            if (area1 == area3)
            {
                printf("\n\nArea of triangle 1 and triangle 3 are same.");
            }
            else
            {
                printf("\n\nArea of triangle 3 is smaller.");
            }
        }
    }

    else if (area2 < area1)
    {
        if (area2 < area3)
        {
            printf("\n\nArea of triangle 2 is smaller.");
        }
        else
        {
            if (area2 == area3)
            {
                printf("\n\nArea of triangle 2 and triangle 3 are same.");
            }
            else
            {
                printf("\n\nArea of triangle 3 is smaller.");
            }
        }
    }

    else
    {
        if (area1 == area2 && area1 == area3)
        {
            printf("\n\nAll area of triangles are same.");
        }
        else
        {
            printf("\n\nArea of triangle 1 and triangle 2 are same.");
        }
    }
}
