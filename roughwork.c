#include <stdio.h>
#include <stdlib.h>

struct studentNum
{
    char name[24], number[10], email[30];
    int age;
    float weight;
};

struct studentNum student(struct studentNum s)
{
    printf("\nName : ");
    scanf("%s", &s.name);

    printf("\nAge : ");
    scanf("%d", &s.age);

    printf("\nWeight : ");
    scanf("%f", &s.weight);

    printf("\nNumber : ");
    scanf("%s", &s.number);

    printf("\nE-mail : ");
    scanf("%s", &s.email);

    return s;
}

void main()
{
    int num;

    printf("\nPlease enter number of students :");
    scanf("%d", &num);

    struct studentNum s1[num];

    for (int i = 0; i < num; i++)
    {
        printf("\n*-*-*-*-*-*-*-*-* Details for student %d *-*-*-*-*-*-*-*-* \n", (i + 1));

        fflush(stdin);
        // student(s1[i]);
        s1[i] = student(s1[i]);
    }

    for (int i = 0; i < num; i++)
    {
        printf("\n|||||||||||||||||| Student %d ||||||||||||||||||\n", (i + 1));
        printf("\nStudent No     : %d", (i + 1));
        printf("\nStudent Name   : %s", s1[i].name);

        if (s1[i].age >= 0 && s1[i].age <= 150)
        {
            printf("\nStudent Age    : %d", s1[i].age);
        }
        else
        {
            printf("\nStudent Age    : Invalid Age");
        }

        printf("\nStudent weight : %.2f", s1[i].weight);
        printf("\nStudent Number : %s", s1[i].number);
        printf("\nStudent E-mail : %s\n\n", s1[i].email);
    }
}