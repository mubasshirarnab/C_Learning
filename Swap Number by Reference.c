#include<stdio.h>

void NumberSwap(int *num1, int*num2);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("The value in function: %d %d\n", a,b);

    NumberSwap(&a,&b);

}
void NumberSwap(int *num1, int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;

    printf("The value in Main: %d %d\n", *num1, *num2);
}
