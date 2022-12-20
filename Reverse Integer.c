#include<stdio.h>

int reverse_int(int);

int main()
{
    int n;
    printf("Enter an integer to Reverse: ");
    scanf("%d", &n);

    printf("The reverse order is: %d\n",reverse_int(n));

    return 0;
}
int reverse_int(int N)
{
    int r,sum=0;
    for(int i=1; N!=0; i++){
        r=N%10;
        N=N/10;
        sum=sum*10+r;
    }

    return sum;
}
