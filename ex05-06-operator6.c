/*
8. 상황 조건 연산자
    조건식 ? 참일 경우 결과 : 거짓일 경우 결과
*/


#include <stdio.h>

int main(void)
{
    printf("상황 연산자\n");

    int num = -10;

    int absolute = num > 0 ? num : num * -1;

    printf("절댓값: %d\n", absolute);

    return 0;
}