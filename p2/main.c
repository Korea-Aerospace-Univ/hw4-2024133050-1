#include <stdio.h>

int main()
{   
    int N=0;    //문자의 개수 초기화
    char ch=0;    //문자 초기화
    int cur_letter =0, max_letter=0; //현재 연속된 소문자 개수/최댓값
    int cur_number=0, max_number=0; //현재 연속된 숫자 개수/최댓

    scanf("%d",&N);     //입력받을 문자 개수 요청

    for(int i=1;i<=N;i++){    //N번 반복하면서 문자 입력
        scanf(" %c",&ch);
        
        if (ch>='a' && ch<='z'){          //문자가 소문자 이면 현재 소문자 개수 추가
            cur_letter++;
            if(cur_letter > max_letter)     //최대 문자 개수 갱신
                max_letter = cur_letter;    

            cur_number = 0;                //숫자연속은 끊김
        }
        else if(ch>='0' && ch<='9'){     //문자가 숫자이면 현재 숫자 개수 추가
            cur_number++;                
            if(cur_number > max_number)    //최대 숫자 개수 갱신
                max_number = cur_number;

            cur_letter = 0;            //문자 연속은 끊
        }
        else {                //그 외 문자(대문자 특수문자 등)
            cur_letter = 0;    //문자 끊기
            cur_number = 0;    //숫자 끊기
        }
    }

    printf("%d\n",max_letter);    //최대 문자 개수 출력
    printf("%d\n",max_number);    //최대 숫자 개수 출력

    return 0;
}
