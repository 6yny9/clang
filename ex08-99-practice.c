#include <stdio.h>

int main(void)
{
// 1번
    printf("1번\n");

    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");


// 2번
    printf("2번\n");

    for(int i = 0; i < 4; i++)
    {
        for(int k = 0; k < 3-i; k++)
            printf(" ");

        for(int j = 0; j < i+1; j++)
            printf("*");
        
        printf("\n");
    }
    printf("\n");


// 3번
    printf("3번\n");

    for(int i = 0; i < 4; i++)
    {
        for(int k = 0; k < 3-i; k++)
            printf(" ");

        for(int j = 0; j < 2*i+1; j++)
            printf("*");

        printf("\n");
    }
    printf("\n");


// 4번
    printf("4번\n");

    int num = 9;    // 무조건 홀수?
    for(int i = 0; i < num; i++)
    {
        int j = i*2+1;   // *개수
        int k = (num-(j))/2;    // " "개수
        
        if(k > 0 )
        {
            for(int l = 0; l < k; l++)
                printf(" ");
            for(int l = 0; l < j; l++)
                printf("*");
            printf("\n");
        }

        else if(k == 0)
        {
            for(int l = 0; l < j; l++)
                printf("*");
            printf("\n");
        }

        else
        {
            for(int l = 0; l < -k; l++)
                printf(" ");
            for(int l = 0; l < 2*num-j; l++)
                printf("*");
            printf("\n");
        }
    }

    return 0;
}