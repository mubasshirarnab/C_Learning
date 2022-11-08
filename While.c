#include<stdio.h>

int main()
{
    int i,n, count=0;
    float avg, sum=0;

    for(i=1; n!=-1; i++){
        scanf("%d", &n);
        if(n%2==1){
            sum=sum+n;
            count++;
        }
    }
    avg=sum/count;
    printf("The Average is %.2f", avg);

    return 0;
}
