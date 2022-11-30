#include<stdio.h>

int main()
{
    int i,j,n,mul=0;
    printf("Enter the number of term: " );
    scanf("%d", &n);
    int arrayA[n][n],arrayB[n][n],arrayC[n][n];

    printf("\nEnter the elements in ArrayA: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Elements-[%d][%d]: ",i,j);
            scanf("%d", &arrayA[i][j]);
        }
    }
    printf("\nArrayA: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%4d", arrayA[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the elements in ArrayB: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Elements-[%d][%d]: ",i,j);
            scanf("%d", &arrayB[i][j]);
        }
    }
    printf("\nArrayB: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%4d", arrayB[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++){
            int count=0;
        for(j=0; j<n; j++){
            mul=mul+arrayA[i][j]*arrayB[j][i];
            count++;
            if(count==3){
                    for(j=0; j<n; j++){
                        arrayC[i][j]=mul;
                    }
                mul=0;
            }
        }
    }
    printf("\nArrayC: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%4d", arrayC[i][j]);
        }
        printf("\n");
    }
+
    return 0;
}
