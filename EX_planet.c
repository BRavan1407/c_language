//Program to check distance from sun from planet.

#include<stdio.h>
void main()
{
    int num;

    printf("\n\nPlease enter any num to check diatance from Sun:");
    printf("\n1=Mercury \n2=Venus \n3=Earth \n4=Mars \n5=Jupiter \n6=Saturn \n7=Uranus \n8=Neptune;");
    printf("\n\n\nEnter Number : ");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("\nDistance of Mercury from sun is 57,910,006km.");
        break;
    
    case 2:
        printf("\nDistance of Venus from sun is 108,199,995km.");
        break;

    case 3:
        printf("\nDistance of Earth from sun is 149,599,951km.");
        break;
    
    case 4:
        printf("\nDistance of Mars from sun is 227,939,920km.");
        break;
    
    case 5:
        printf("\nDistance of Jupiter from sun is 778,330,257km.");
        break;
    
    case 6:
        printf("\nDistance of Saturn from sun is 1,429,400,028km.");
        break;

    case 7:
        printf("\nDistance of Uranus from sun is 2,870,989,228km.");
        break;

    case 8:
        printf("\nDistance of Neptune from sun is 4,504,299,579km.");
        break;
    default:
        printf("\nInvalid Input");
        break;
    }
    

}