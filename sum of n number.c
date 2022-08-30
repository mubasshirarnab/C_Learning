
#include <stdio.h>

int main()
{
    int i, n;
    int sum=0;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum= sum + i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}
