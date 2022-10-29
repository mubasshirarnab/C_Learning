#include<stdio.h>

int main()
{
    int i,n,a;
    float avg;
    int sum=0, max=0;

    printf("Enter the number of term: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("Enter the %dth number: ", i);
        scanf("%d", &a);
        sum=sum+a;
        if(a>max){
            max=a;
        }
    }
    avg=sum/n;
    printf("The Average is:%.2f\nThe Maximum is:%d", avg,max);

    return 0;
}
