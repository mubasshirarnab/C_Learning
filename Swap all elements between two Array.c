#include<stdio.h>

int main()
{
    int i,n,m;
    printf("Enter 1st Array's number of term: ");
    scanf("%d", &n);
    int arrayA[n];

    for(i=0; i<n; i++){
        printf("Enter 1st Array's %dth element: ", i+1);
        scanf("%d", &arrayA[i]);
    }

    printf("Enter 2nd Array's number of term: ");
    scanf("%d", &m);
    int arrayB[m];

    for(i=0; i<m; i++){
        printf("Enter 2nd Array's %dth element: ", i+1);
        scanf("%d", &arrayB[i]);
    }

    int arrayC[100];

    printf("\nArray B: ");
    for(i=0; i<n; i++){
        arrayC[i]=arrayB[i];
        arrayB[i]=arrayA[i];
        printf("%d,", arrayB[i]);
    }
    printf("\nArray A: ");
    for(i=0; i<m; i++){
        arrayA[i]=arrayC[i];
        printf("%d,", arrayA[i]);
    }

    return 0;
}

