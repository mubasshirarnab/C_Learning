#include<stdio.h>

int main()
{
    int i,j,n,m;
    printf("n & m: ");
    scanf("%d %d", &n, &m);
    int array[n][m];

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &array[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    int M[n];
    int mini=array[0][0];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(array[i][j]<mini){
                mini=array[i][j];
            }
        }
        M[i]=mini;
        mini=array[i+1][0];
    }

    int max=0,max_i;
    for(i=0; i<n; i++){
        if(M[i]>max){
            max=M[i];
            max_i=i+1;
        }
    }
    printf("\nThe row number is: %d\n", max_i);

    return 0;
}
