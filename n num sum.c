#include<stdio.h>

int main()
{
    int n, i, m;
    int sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i=1;i<=n; i++){
           scanf("%d", &m);
           printf("%d number is %d\n", i, m);

           sum=sum+m;
    }

    printf("\nThe Sum of the %d numbers is %d", n, sum);

    return 0;
}
