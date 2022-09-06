#include<stdio.h>

int main()
{
    int n, i, sum=0;
    float avg;

    printf("Enter the n number to Sum: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        sum=sum+i;
        avg=sum/n;
    }

    printf("The Sum is %d\n", sum);
    printf("The Average is %.2lf\n", avg);

    return 0;
}
