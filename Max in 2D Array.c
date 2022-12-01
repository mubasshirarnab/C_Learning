#include<stdio.h>

int main()
{
    int i,j,n,m,max,max_i=0,max_j=0;
    printf("Enter the values of N & M : ");
    scanf("%d %d", &n, &m);
    int array[n][m];

    printf("\nEnter the elements in the Arrray: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Elements-[%d][%d]: ", i,j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nArray: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }
    max=array[0][0];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(max<array[i][j]){
                max=array[i][j];
                max_i=i;
                max_j=j;
            }
        }
    }
    printf("Maximum: %d\tIndex: [%d][%d]\n", max,max_i,max_j);

    return 0;
}
