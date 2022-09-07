#include<stdio.h>

int main()
{
    int n,i;
    int sum=0;
    printf("Enter the Number: ");
    scanf("%d", &n);

    printf("The Divisors are: ");
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
            printf("%d,",i);
        }
    }

    printf("\nThe Sum of the Divisors is = %d", sum);

    if(sum==n){
        printf("\nPerfect Number");
    }
    else{
        printf("\nNot a Perfect Number");
    }

    return 0;

}
