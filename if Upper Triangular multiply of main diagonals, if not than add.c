#include<stdio.h>

int main()
{
    int n,i,j,flag=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int array[n][n];

    printf("Enter the Array Elements: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Element-[%d][%d]: ", i,j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nArray: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }

    for(i=1; i<n; i++){
        for(j=0; j<i; j++){
            if(array[i][j]!=0){
                flag=1;
            }
        }
    }

    int product=1,sum=0;
    if(flag==1){
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i==j){
                    product=product*array[i][j];
                }
            }
        }
    }
    else{
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i==j){
                    sum=sum+array[i][j];
                }
            }
        }
    }

    if(flag==0){
        printf("\nThe Product is: %d", product);
    }
    else{
        printf("\nThe Sum is: %d", sum);
    }

    return 0;
}
