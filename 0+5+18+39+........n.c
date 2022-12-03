#include<stdio.h>

int main()
{
    int i,n;
    int sum=0, count=0;
    printf("Enter the number of term: ");
    scanf("%d", &n);

    for(i=0; count<n; i=i+2){
        sum=sum+i*i+count;
        count++;
    }
    printf("The Sum of the series is: %d", sum);

    return 0;
}
