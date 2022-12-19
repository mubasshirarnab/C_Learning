#include<stdio.h>

int display(int);

int main()
{
    int x;
    scanf("%d", &x);

    display(x);

    return 0;
}

int display(int n)
{
    if(0==n){
        return 1;
    }
    else{
        display(n-1);
    }
    printf("%d\n", n);
}
