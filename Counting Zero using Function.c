#include<stdio.h>

int CountZero(int array[], int x);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int A[n];

    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }

    printf("The number of zero is: %d", CountZero(A,n));

    return 0;
}
int CountZero(int array[], int x)
{
    int count=0;

    for(int i=0; i<x; i++){
        if(array[i]==0){
            count++;
        }
    }
    return count;
}


