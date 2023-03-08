#include<stdio.h>

int main()
{
    int a = 1,  b = 2 , c = 1, i, n, sum, sum2, sum3;

    printf("Enter the limit:");
    scanf("%d", &n);
    printf("%d %d %d ", a, b, c);

    for( i = 1; i <= n - 1; i++){
        sum = a + 3;
        printf("%d ", sum);
        a=sum;
        sum2 = b + 3;
        printf("%d ", sum2);
        b = sum2;
        sum3 = c+3;
        printf("%d ", sum3);
        c = sum3;
    }
    return 0;
}
