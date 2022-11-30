#include<stdio.h>

int main()
{
    int n,m,i,j;
    printf("Enter the values of m and n: ");
    scanf("%d %d", &n, &m);
    int arrayA[n][m],arrayB[n][m],arrayC[n][m];

    printf("Enter the elements in ArrayA: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Element-[%d][%d]: ", i,j);
            scanf("%d", &arrayA[i][j]);
        }
    }
    printf("ArrayA: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%4d", arrayA[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements in ArrayB: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Element-[%d][%d]: ", i,j);
            scanf("%d", &arrayB[i][j]);
        }
    }
    printf("ArrayB: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%4d", arrayB[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            arrayC[i][j]=arrayA[i][j]+arrayB[i][j];
        }
    }

    printf("ArrayC: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%4d", arrayC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
