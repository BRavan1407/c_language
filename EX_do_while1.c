// wrire a program to find area of triangle,circle,cylinder,qure,and also check to user continue with program if yes then continue or no then stop.

/*
triangle :- area= 0.5*height*base
circle :- pi*r*r
cylinder :- (2*pi*r*h)+(2*pi*r*r)
cube :- 6*edge*edge*edge
square :- edge*edge
*/

#include <stdio.h>
void main()
{
    float height, base, r, edge, pi, area;
    int temp, operation;

    pi = 3.141592;
    temp = 96;

    do
    {
        printf("\n\n\n");
        printf("\nEnter value for operation :\n");

        printf("1-Area of Triangle\n");
        printf("2-Area of Circle\n");
        printf("3-Area of cylinder\n");
        printf("4-Area of Cube\n");
        printf("5-Area of Square\n");
        printf("6-Exit\n");

        printf("\nYour Input :");
        scanf("%d", &operation);

        switch (operation)
        {
        case 1:
            printf("\nFor Triangle :");
            printf("\nEnter value of height :");
            scanf("%f", &height);
            printf("\nEnter value of base :");
            scanf("%f", &base);

            area = 0.5 * height * base;

            printf("\nArea of triangle is %.2f", area);
            break;

        case 2:
            printf("\nFor Circle :");
            printf("\nEnter value of radius :");
            scanf("%f", &r);

            area = pi * r * r;

            printf("\nArea of circle is %.2f", area);
            break;

        case 3:
            printf("\nFor Cylinder :");
            printf("\nEnter value of height :");
            scanf("%f", &height);
            printf("\nEnter value of radius :");
            scanf("%f", &r);

            area = (2 * pi * r * height) + (2 * pi * r * r);

            printf("\nArea of cylinder is %.2f", area);
            break;

        case 4:
            printf("\nFor Cube :");
            printf("\nEnter Value of Edge :");
            scanf("%f", &edge);

            area = 6 * edge * edge * edge;

            printf("\nArea of cube is %.2f", area);
            break;

        case 5:
            printf("\nFor square :");
            printf("\nEnter value of edge :");
            scanf("%f", &edge);

            area = edge * edge;

            printf("\nArea of square is %.2f", area);
            break;

        case 6:
            temp = 100;
            printf("\nThank you for using this program.");
            break;

        default:
            printf("\nEnter Valid Input, Try Again.");
            break;
        }
    } while (temp != 100);
    {
        /* code */
    }
}