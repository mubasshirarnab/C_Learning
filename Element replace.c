#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int arrayA[n];

    for(i=0; i<n; i++){
        printf("Enter the %dth element: ", i+1);
        scanf("%d", &arrayA[i]);
    }
    printf("\nOutput: ");
    for(i=0; i<n; i++){
        if(arrayA[i]%3==0){
            arrayA[i]=-1;
        }
        printf("%d,", arrayA[i]);
    }

    return 0;
}
