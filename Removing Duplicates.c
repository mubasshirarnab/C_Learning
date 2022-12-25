#include<stdio.h>

int main()
{
    int i,j,temp,n;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int arrayA[n];

    for(i=0; i<n; i++){
        printf("Enter the %dth element: ", i+1);
        scanf("%d", &arrayA[i]);
    }
    int count=0;
    for(i=0,j=0; i<n; i++,j++){
        for(j=i+1; j<n; j++){
            if(arrayA[i]==arrayA[j]){
                count++;
                for(int k=j; k<n; k++){
                    arrayA[k]=arrayA[k+1];
                }
            }
        }
    }
    printf("After removing all the duplicate elements: ");
    for(i=0; i<n-count; i++){
        printf("%d ", arrayA[i]);
    }

    return 0;
}
