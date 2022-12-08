#include<stdio.h>

int fact(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    fact(n);

    printf("The Factorial of %d is: %d", n, fact(n));

    return 0;
}

int fact(int num)
{
    int product=1;
    for(int i=1; i<=num; i++){
        product*=i;
    }
    return product;
}
