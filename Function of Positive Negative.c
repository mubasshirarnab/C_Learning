#include<stdio.h>

int check_even_odd(int);

int main()
{
    int n;
    scanf("%d", &n);
    check_even_odd(n);
}

int check_even_odd(int num)
{
    if(num%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is Odd");
    }
}
