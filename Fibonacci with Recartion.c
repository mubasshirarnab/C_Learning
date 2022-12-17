#include<stdio.h>

int Fibo(int);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("%d", Fibo(n));

    return 0;
}

int Fibo(int x)
{
    if(x==1){
        return 0;
    }
    if(x==2){
        return 1;
    }
    else{
        return Fibo(x-1) + Fibo(x-2);
    }
}
