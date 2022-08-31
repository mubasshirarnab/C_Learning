#include<stdio.h>

int main()
{
    int i,n;
    float fact=1;

    printf("Please enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        fact= fact * i;
    }
        printf("The factorial is %.2f\n", fact);

    return 0;
}
