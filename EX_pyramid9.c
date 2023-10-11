/*
* * * * * *
 *       * 
  *     *
   *   *
    * *
     *
*/

#include <stdio.h>
void main()
{
    int a, b, c;

    b = 1;

    c = 6;

    while (b <= 6)
    {
        a = 1;

        while (a <= b)
            // if (a == 1 || b == 1 || a == b)
            // {

                {
                    printf(" ");
                    a++;
                }
            // }
            //     else
            //     {
            //         printf(" ");
            //     }
            

        a = 1;

        while (a <= c)
            if (a == 1 || b==1 )
            {

                {
                    printf("* ");
                    a++;
                }
            }
                // else
                // {
                //     printf(" ");
                // }
            

        printf("\n");

        b++;
        c--;
    }

    printf("\n\nGood Bye");
}