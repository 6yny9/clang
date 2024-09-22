/*
구조체 배열
*/


#include <stdio.h>
#include <string.h>

struct person
{
    char name[30];
    int age;
};

int main(void)
{
    // 길이가 3인 구조체 배열 선언 및 초기화
    struct person boy[3] =
    {
        {"김소년", 12},
        {"이소년", 14},
        {"박소년", 16},
    };

    for(int i = 0; i < 3; i++)
    {
        printf("소년의 이름 %s 나이는 %d\n", boy[i].name, boy[i].age);
    }

    return 0;
}