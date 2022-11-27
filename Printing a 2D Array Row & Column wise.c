#include<stdio.h>

int main()
{
    int row,column,n,m;
    printf("Enter the value of M,N: ");
    scanf("%d %d", &n,&m);
    int array[n][m];

    for(row=0; row<n; row++){
        for(column=0; column<m; column++){
            scanf("%d", &array[row][column]);
        }
    }
    printf("\nRow-wise: ");
    for(row=0; row<n; row++){
        for(column=0; column<m; column++){
            printf("%d ", array[row][column]);
        }
    }
    printf("\nColumn-wise: ");
    for(column=0; column<m; column++){
        for(row=0; row<n; row++){
            printf("%d ", array[row][column]);
        }
    }

    return 0;
}
