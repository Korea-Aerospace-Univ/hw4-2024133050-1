#include <stdio.h>

int main()
{   
    int N=0;
    char ch=0;
    int cur_letter =0, max_letter=0;
    int cur_number=0, max_number=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%c",&ch);
        
        if (ch>='a'&& ch<='z'){
            cur_letter ++;
            if(cur_letter > max_letter)
                max_letter = cur_letter;
        }
        else 
            cur_letter=0;
    
        if(ch>='0' && ch<='9'){
            cur_number ++;
            if(cur_number > max_number)
                max_number = cur_number;
        }
        
        else
            cur_number=0;
        
    }
    
    printf("%d\n",max_letter);
    printf("%d\n",max_number);
}
