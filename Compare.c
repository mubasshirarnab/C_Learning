#include<stdio.h>

void Compare(int, int);

int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    Compare(a,b);

    return 0;
}

void Compare(int num1, int num2)
{
    if(num1>num2){
        printf("%d is greater than %d", num1,num2);
    }
    else if(num1<num2){
        printf("%d is less than %d", num1,num2);
    }
    else{
        printf("%d is equal to %d", num1,num2);
    }
}
