#include <stdio.h>

int main()
{
    int i=1;

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int product;

    for(i=10; i>=1; i--){
        product=i*n;
        printf("%d x %d = %d\n", n, i, product);

    }

    return 0;
}
