#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    float array[n], avg, sum=0;

    for(i=0; i<n; i++){
        scanf("%f", &array[i]);
        sum=sum+array[i];
    }
    avg=sum/n;
    printf("The Average is: %.2f", avg);

    return 0;
}
