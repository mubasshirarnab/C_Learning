#include<stdio.h>

int main()
{
    int i,j,n,m;
    printf("Enter the values of N,M: ");
    scanf("%d %d", &n,&m);
    int arrayA[n][m],arrayB[n][m];

    printf("\nEnter the elements in arrayA: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Elements-[%d][%d]: ",i,j);
            scanf("%d", &arrayA[i][j]);
        }
    }

    printf("\nArrayA: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%4d", arrayA[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Reverse of the Matrix ArrayA: \n");
    for(i=0; i<n; i++){
        for(j=m-1; j>=0; j--){
            printf("%4d", arrayA[i][j]);
        }
        printf("\n");
    }

    return 0;
}
