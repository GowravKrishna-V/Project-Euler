#include <stdio.h>

int main()
{
    int i,j,flag=1;
    for(i=1;;i++){
        flag = 1;
        for(j=1;j<=20;j++){
            if(i%j!=0){
                flag = 0;
            }
        }
        if(flag==1){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
