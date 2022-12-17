#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int array[n];
    int *ptr;

    ptr=array;

    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }

    printf("The Reverse Order: ");
    for(int i=n-1; i>=0; i--){
        printf("%d ", ptr[i]);
    }

    return 0;
}
