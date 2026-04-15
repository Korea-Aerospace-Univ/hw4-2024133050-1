#include <stdio.h>

int main()
{
    int answer = 0, n = 0, sum = 1; //정답,정수,횟수 초기화
    scanf("%d", &answer);      //정답 입력받기
    //do while 문 조건(정수가 정답이 아닐때 반복)
    do {
        scanf("%d", &n);    //정수 입력받기

        if (n > answer)    //정수가 정답보다 크면 정수>? 출력
            printf("%d>?\n", n);
        else if (n < answer) //정수가 정답보다 작으면 정수<? 출력
            printf("%d<?\n", n);
        else {                //정수가 정답인경우 정수== 출력하고 횟수 출력
            printf("%d==?\n", n);
            printf("%d\n", sum);
        }

        sum++;            //횟수 카운트

    } while (n != answer);   //정수가 정답이 아닐경우 반복

    return 0;
}
