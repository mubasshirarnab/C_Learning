#include<stdio.h>

int main()
{
    int n,i;
    int sum=0;
    long int t=9;

    printf("Enter the Number of term: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("%ld", t);
        if(i<n){
        printf("+");
       }
       sum=sum+t;
       t=(t*10)+9;
    }

    printf("\nThe Sum is %ld", sum);

    return 0;
}

