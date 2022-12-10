#include<stdio.h>

int power(int,int);

int main()
{
    int x,y;
    printf("Enter the valu of x: ");
    scanf("%d", &x);
    printf("Enter the valu of y: ");
    scanf("%d", &y);

    power(x,y);

    printf("\n%d to the power %d is: %d", x,y,power(x,y));
}
int power(int num1, int num2)
{
    int product=1;

    for(int i=1; i<=num2; i++){
        product*=num1;
    }

    return product;
}
