#include<stdio.h>

int square(int);

int main()
{
    int n;
    scanf("%d", &n);

    for(int num=1; num<=n; num++){
        printf("The square of %d is: %d\n", num, square(num));
    }
    return 0;
}
int square(int num)
{
    return num*num;
}
