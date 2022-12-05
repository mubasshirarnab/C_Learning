#include<stdio.h>

int Calculate_sum(int);

int main()
{
    int sum;
    printf("\nSum in main: %d", Calculate_sum(sum));
}

int Calculate_sum(int num)
{
    int n,sum=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &num);

        sum=sum+num;
    }

    printf("\nThe Sum in Function: %d", sum);

    return sum;
}
