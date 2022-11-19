#include<stdio.h>

int main()
{
    int i,n,position;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int array[n];

    for(i=0; i<n; i++){
        printf("Enter the %dth element: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Enter the position: ");
    scanf("%d", &position);

    for(i=0; i<n; i++){
        if(i==position){
            continue;
        }
        printf("%d,", array[i]);
    }

    return 0;
}
