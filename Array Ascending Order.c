#include<stdio.h>

void AscendingOrder(int array[], int n);

int main()
{
    int x;
    printf("Enter the number of term: ");
    scanf("%d", &x);
    int B[x];

    for(int i=0; i<x; i++){
        scanf("%d", &B[i]);
    }

    AscendingOrder(B,x);

    return 0;
}

void AscendingOrder(int array[], int n)
{
    int i,j,temp;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(array[j]<array[i]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d ", array[i]);
    }
}
