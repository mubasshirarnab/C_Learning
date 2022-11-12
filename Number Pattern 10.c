#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of term: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=i; j<=n; j++){
            printf(" ");
        }
        for(j=i; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=n; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(j=i; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
