#include<stdio.h>

int main()
{
    int i,j,k,n,m;
    printf("Enter the 1st Array's number of term: ");
    scanf("%d", &n);
    int arrayA[n];

    for(i=0; i<n; i++){
        printf("Enter the 1st Array's %dth element: ", i+1);
        scanf("%d", &arrayA[i]);
    }

    printf("\nEnter the 2nd Array's number of term: ");
    scanf("%d", &m);
    int arrayB[m];

    for(j=0; j<m; j++){
        printf("Enter the 2nd Array's %dth element: ", j+1);
        scanf("%d", &arrayB[j]);
    }

    int O=n+m;
    int arrayC[O];

    for(i=0,j=0; i<n; i++,j++){
        arrayC[j]=arrayA[i];
    }
    for(i=0; i<m; i++,j++){
        arrayC[j]=arrayB[i];
    }

    printf("\nThe Union set: ");
    for(i=0; i<O; i++){
        for(j=i+1; j<O; j++){
            if(arrayC[i]==arrayC[j]){
                for(k=j; k<O-1; k++){
                    arrayC[k]=arrayC[k+1];
                }
                O--;
                j--;
            }
        }
    }

    for(i=0; i<O; i++){
        printf("%d ", arrayC[i]);
    }

    return 0;
}
