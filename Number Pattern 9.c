#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of term: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--){
        for(j=n; j>=i; j--){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
