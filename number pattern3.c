#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of term: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
           printf("2 ");
        }
        for(j=1; j<=n-i; j++){
            printf("1 ");
        }
        printf("\n");
    }

    return 0;
}
