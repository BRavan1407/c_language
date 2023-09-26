// Program to make simple calculator.

#include <stdio.h>
void main()
{
    int add1, add2, sub1, sub2, mul1, mul2, mod1, mod2, add, sub, mul, mod, num;
    float div,div1, div2;

    printf("\nSelect anyone from below :");

    printf("\n1=Addition \n2=Substraction \n3=Multiplication \n4=Division \n5=Modual");
    printf("\nEnter your value :");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        // Addition
        printf("Enter two numbers for Addition:");

        printf("\nNumber 1 -");
        scanf("%d", &add1);
        printf("\nNumber 2 -");
        scanf("%d", &add2);
        add = add1 + add2;
        printf("\nThe sum of Number 1 and Number 2 is %d\n", add);
        break;

    case 2:
        // Substraction
        printf("\nEnter two numbers for Substraction:");

        printf("\nNumber 1 -");
        scanf("%d", &sub1);
        printf("\nNumber 2 -");
        scanf("%d", &sub2);
        sub = sub1 - sub2;
        printf("\nThe Substraction of Number 1 and Number 2 is %d\n", sub);
        break;

    case 3:
        // Multiplication
        printf("\nEnter two numbers for Multiplication:");

        printf("\nNumber 1 -");
        scanf("%d", &mul1);
        printf("\nNumber 2 -");
        scanf("%d", &mul2);
        mul = mul1 * mul2;
        printf("\nThe Multiplication of Number 1 and Number 2 is %d\n", mul);
        break;

    case 4:
        // Division
        printf("\nEnter two numbers for Division:");

        printf("\nNumber 1 -");
        scanf("%f", &div1);
        printf("\nNumber 2 -");
        scanf("%f", &div2);
        div = div1 / div2;
        printf("\nThe Division of Number 1 and Number 2 is %.2f\n", div);
        break;

    case 5:
        // Modual
        printf("\nEnter two numbers for find Modual that:");

        printf("\nNumber 1 -");
        scanf("%d", &mod1);
        printf("\nNumber 2 -");
        scanf("%d", &mod2);
        mod = mod1 % mod2;
        printf("\nThe modual of Number 1 and Number 2 is %d\n", mod);
        break;

    default:
        printf("\nEnter Valid Input.");
        break;
    }
}