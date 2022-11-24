#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int arrayA[n],arrayB[n];

    for(i=0; i<n; i++){
        scanf("%d", &arrayA[i]);
    }

    printf("Array A: ");
    for(i=0; i<n; i++){
        printf("%d,", arrayA[i]);
    }

    printf("\nArray B: ");
    for(i=n-1,j=0; i>=0; i--,j++){
        arrayB[j]=arrayA[i];
        printf("%d,", arrayB[j]);
    }

    return  0;
}
