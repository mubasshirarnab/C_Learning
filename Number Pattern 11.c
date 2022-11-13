#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of term: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--){
        for(j=i; j>=1; j--){
            printf("%d ", 2*j);
        }
        printf("\n");
    }

    return 0;
}
