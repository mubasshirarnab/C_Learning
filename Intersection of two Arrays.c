#include<stdio.h>

int main()
{
    int n,m,i,j,temp=0;
    printf("Enter the 1st Array's number of term: ");
    scanf("%d", &n);
    int arrayA[n];

    for(i=0; i<n; i++){
        printf("Enter the 1st Array's %d(th) element: ",i+1);
        scanf("%d", &arrayA[i]);
    }
    printf("\nEnter the 2nd Array's number of term: ");
    scanf("%d", &m);
    int arrayB[m];

    for(j=0; j<m; j++){
        printf("Enter the 2nd Array's %d(th) element: ",j+1);
        scanf("%d", &arrayB[j]);
    }
    printf("\nIntersection set: ");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(arrayA[i]==arrayB[j]){
                temp=1;
                printf("%d ", arrayA[i]);
            }
        }
    }
    if(temp==0){
        printf("Empty Set");
    }

    return 0;
}


