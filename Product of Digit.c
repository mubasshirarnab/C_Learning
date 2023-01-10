#include<stdio.h>

int DigitMult(int);

int main()
{
    int num;
    printf("Enter the value: ");
    scanf("%d", &num);

    printf("\nThe product of all the Digit is: %d\n", DigitMult(num));

    return 0;
}

int DigitMult(int n)
{
    int rem, product=1;

    while(n!=0){
        rem = n % 10;
        n = n / 10;
        product*=rem;
    }

    return product;
}
