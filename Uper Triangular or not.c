#include<stdio.h>

int main()
{
    int n,i,j,flag=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int array[n][n];

    printf("Enter the Array Elements: \n");
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

    for(i=1; i<n; i++){
        for(j=0; j<i; j++){
            if(array[i][j]==0){
                flag=1;
            }
        }
    }
    if(flag==1){
        printf("\nThe above matrix is an Upper Triangular Matrix\n");
    }
    else{
        printf("\nThe above matrix is not an Upper Triangular Matrix\n");
    }

    return 0;
}

