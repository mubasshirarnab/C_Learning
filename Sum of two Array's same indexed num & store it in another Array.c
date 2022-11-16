#include<stdio.h>

int main()
{
    int i,n,sum;
    printf("Enter the number of term: ");
    scanf("%d", &n);

    int array1[n], array2[n], array3[n];

    for(i=0; i<n; i++){
        printf("Enter 1st Array's %dth element: ", i+1);
        scanf("%d", &array1[i]);
        printf("Enter 2nd Array's %dth element: ", i+1);
        scanf("%d", &array2[i]);
    }

    printf("\nThe 3rd Array's elements: ");
    for(i=0; i<n; i++){
        sum=array1[i]+array2[i];
        array3[i]=sum;
        printf("%d,", array3[i]);
    }

    return 0;
}
