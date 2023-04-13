#include<stdio.h>

int main()
{
    int n;
    long long int sum = 0;

    printf("Enter the number of term: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            sum += a[i] * a[j];
        }  
    }

    printf("The sum is: %lld\n", sum);

    return 0;  
}