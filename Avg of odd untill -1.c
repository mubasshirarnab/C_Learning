#include<stdio.h>

int main()
{
    int n;
    int count=0;
    float sum=0,avg;

    while(n!=-1){
        scanf("%d", &n);
        if(n%2==1){
            sum=sum+n;
            count=count+1;
        }
    }
    avg=sum/count;
    printf("The Average is %.2f\n", avg);

    return 0;
}
