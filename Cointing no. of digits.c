#include<stdio.h>

int Count_Digit(int);

int main()
{
    int n;
    printf("Enter the number to check: ");
    scanf("%d", &n);

    printf("The no. of Digit: %d\n", Count_Digit(n));

    return 0;
}


int Count_Digit(int N)
{
    int rem,count=0;
    for(int i=1; N!=0; i++){
        rem=N%10;
        N=N/10;
        count++;
    }
    return count;
}
