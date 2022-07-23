#include <stdio.h>
#include <math.h>

int main()
{
    long long n=600851475143;
    long i,j,max=0;
    int isPrime=1;
    for(i=2;i<sqrt(n);i++){
        if(n%i==0){
            for(j=2;j<i;j++){
                if(i%j==0){
                    isPrime=0;
                    break;
                }
            }
            if(isPrime==1){
                max = i;
            }
        }
    }
    printf("%lu",max);
    return 0;
}
