#include<stdio.h>

int GCD(int,int);

int main()
{
    int n,m;
    printf("Enter the value of n & m: ");
    scanf("%d %d", &n,&m);

    printf("The GCD of %d and %d is: %d\n", n,m, GCD(n,m));

    return 0;
}

int GCD(int x, int y)
{
    int gcd;
    for(int i=1; i<=x; i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }
    return gcd;
}
