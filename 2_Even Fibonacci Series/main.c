#include <stdio.h>

int main()
{
    int i,curr=1,prev=0,temp,sum=0;
    while(curr<4000000){
        temp = curr;
        curr = curr + prev;
        prev = temp;
        if(curr%2 == 0){
            sum+=curr;
        }
    }
    printf("%d",sum);
    return 0;
}
