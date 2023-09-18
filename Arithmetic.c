//Programs for perform arithmetic operations

#include<stdio.h>
void main()
{   
    int add1,add2,sub1,sub2,mul1,mul2,mod1,mod2,add,sub,mul,mod,div1,div2;
    float div;

    //Addition
    printf("Enter two numbers for Addition:");

    printf("\nNumber 1 -");
    scanf("%d",&add1);
    printf("\nNumber 2 -");
    scanf("%d",&add2);
    add=add1+add2;
    printf("\nThe sum of Number 1 and Number 2 is %d\n",add);

    //Substraction
    printf("\nEnter two numbers for Substraction:");

    printf("\nNumber 1 -");
    scanf("%d",&sub1);
    printf("\nNumber 2 -");
    scanf("%d",&sub2);
    sub=sub1-sub2;
    printf("\nThe Substraction of Number 1 and Number 2 is %d\n",sub);

    
    //Multiplication
    printf("\nEnter two numbers for Multiplication:");

    printf("\nNumber 1 -");
    scanf("%d",&mul1);
    printf("\nNumber 2 -");
    scanf("%d",&mul2);
    mul=mul1*mul2;
    printf("\nThe Multiplication of Number 1 and Number 2 is %d\n",mul);

    
    //Division
    printf("\nEnter two numbers for Division:");

    printf("\nNumber 1 -");
    scanf("%d",&div1);
    printf("\nNumber 2 -");
    scanf("%d",&div2);
    div=div1/div2;
    printf("\nThe Division of Number 1 and Number 2 is %.2f\n",div);

    
    //Modual
    printf("\nEnter two numbers for find Modual that:");

    printf("\nNumber 1 -");
    scanf("%d",&mod1);
    printf("\nNumber 2 -");
    scanf("%d",&mod2);
    mod=mod1%mod2;
    printf("\nThe modual of Number 1 and Number 2 is %d\n",mod);

}