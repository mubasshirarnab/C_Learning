#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int array[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Element-[%d][%d]: ", i,j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nThe Matrix: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }
    printf("\nMajor Diagonal: ");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                printf("%d ", array[i][j]);
            }
        }
    }
    printf("\nMinor Diagonal: ");
    for(i=0,j=4; i<n; i++,j--){
        printf("%d ", array[i][j]);
    }

    return 0;
}
