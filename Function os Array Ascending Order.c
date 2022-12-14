#include<stdio.h>

void MultipliesArray(int array[], int n);

int main()
{
    int x;
    printf("Enter the number of term: ");
    scanf("%d", &x);
    int A[x];

    for(int i=0; i<x; i++){
        scanf("%d", &A[i]);
    }

    MultipliesArray(A,x);

    return 0;
}

void MultipliesArray(int array[], int n)
{
    int product;
    for(int i=0; i<n; i++){
        product=array[i]*2;
        array[i]=product;

        printf("%d ", array[i]);
    }
}
