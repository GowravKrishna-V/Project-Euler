#include <stdio.h>

int main()
{
    int i,sq_sum=0,sum_sq=0;
    for(i=1;i<=100;i++){
        sum_sq = sum_sq + (i*i);
        sq_sum = sq_sum + i;
    }
    sq_sum*=sq_sum;
    (sq_sum>sum_sq)?printf("%d",(sq_sum-sum_sq)):printf("%d",(sum_sq-sq_sum));
    return 0;
}
