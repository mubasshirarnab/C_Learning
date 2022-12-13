#include<stdio.h>

void ArrayMini(int array[], int n);

int main()
{
    int x;
    printf("Enter the number of term: ");
    scanf("%d", &x);
    int A[x];

    for(int i=0; i<x; i++){
        scanf("%d", &A[i]);
    }

    ArrayMini(A,x);

    return 0;
}

void ArrayMini(int array[], int n)
{
    int mini=array[0];
    for(int i=1; i<n; i++){
        if(array[i]<mini){
            mini=array[i];
        }
    }
    printf("Minimum Value: %d", mini);
}
