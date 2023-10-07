//10 : 1 +2+3+4+5+6+7+8+9+10 = 55


#include<stdio.h>
void main()
{
    int num,sum;

    printf("\nEnter any number for sum :");
    scanf("%d",&num);

    sum=0;

    for (int i = 1; i <= num ; i++)
    {
        sum=sum+i;
    }

        printf("%d",sum);

                
    

}