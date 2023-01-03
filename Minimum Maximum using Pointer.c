#include<stdio.h>

void getMinMax(int *A, int n, int *min, int *max);

int main()
{
    int i,x,min=0,max=0;
    printf("Enter the value of X: ");
    scanf("%d", &x);
    int array[x];

    for(i=0; i<x; i++){
        printf("Enter the %dth element: ", i+1);
        scanf("%d", &array[i]);
    }

    getMinMax(array,x,&min,&max);

    return 0;
}

void getMinMax(int *A, int n, int *min, int *max)
{
    int i;
    *max=*min=A[0];
    for(i=0; i<n; i++){
        if(A[i]>*max){
            *max=A[i];
        }
        if(*min>A[i]){
            *min=A[i];
        }
    }
    printf("\nMinimum: %d\nMaximum: %d\n", *min, *max);
}
