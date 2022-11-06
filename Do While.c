#include<stdio.h>

int main()
{
    int n, count=0;
    float avg, sum=0;

    do{
        scanf("%d", &n);
        if(n%2==1){
            sum=sum+n;
            count++;
        }
    }while(n!=-1);

    avg=sum/count;
    printf("The Average is %.2f", avg);

    return 0;
}
