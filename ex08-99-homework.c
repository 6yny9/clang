/*
*
**
***
****
*****
****** 이중 for문 이중 if else if else
*******
*/


#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 7; i++)
        // i = 0;  j < 1
        // i = 1;  j < 2
        // i = 2;  j < 3
        // ...
        // i = 6;  j < 7


    {
        for(int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

//////////////////////////////////////

    for(int i = 0; i < 7; i++)
    {   
        for(int j = 0; j < 7; j++)
         {
                if(j < 3 - i)
                    printf(" ");
                else if(j > 3 + i)
                    printf(" ");
                else if(j < i - 3)
                    printf(" ");
                else if(j > 9 - i)
                    printf(" ");
                else
                    printf("*");
         } 

         printf("\n");

    }


    return 0;
}