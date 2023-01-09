#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int array[n][n];

    printf("\nEnter the Array's elements: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Element-[%d][%d]: ", i,j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nArray: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }

    printf("\n\nPrinting All the Even Elements Column wise: \n");

    for(j=0; j<n; j++){
        for(i=0; i<n; i++){
            if(array[i][j]%2 == 0){
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
