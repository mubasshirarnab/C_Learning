#include<stdio.h>

int digitPosition(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("The second Digit is: %d",digitPosition(num));

    return 0;
}

int digitPosition(int n)
{
    int x, rem, count=0;

    while(n!=0){
        rem = n % 10;
        n = n / 10;
        x = rem;
        count++;
        if(count == 2){
            break;
        }
    }

    return x;
}
