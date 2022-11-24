#include<stdio.h>

int main()
{
    int i,n,position,num;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int array[n];

    for(i=0; i<n; i++){
        printf("Enter the %dth element: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Enter the Number to insert: ");
    scanf("%d", &num);
    printf("Enter the position to insert: ");
    scanf("%d", &position);

    for(i=0; i<=n; i++){
        if(i==position){
            array[i]=num;
        }
        printf("%d,", array[i]);
    }

    return 0;
}
