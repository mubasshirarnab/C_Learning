#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int array[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                array[i][j]=1;
            }
            else{
                array[i][j]=0;
            }
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
