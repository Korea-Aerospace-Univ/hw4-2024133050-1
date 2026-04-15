#include <stdio.h>

int main()
{
    int answer=0,n=0,sum=1;
    scanf("%d",&answer);
    
    do {
        
        scanf("%d",&n);
        if(n > answer)
            printf("%d>?\n",n);
        else if(n<answer)
            printf("%d<?\n",n);
        else{
            printf("%d==?\n",n);
            printf("%d",sum);
            break;
        }
        sum ++;
    }while(n);
    
    return 0;
}
