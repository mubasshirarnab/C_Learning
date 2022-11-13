#include<stdio.h>

int main()
{
    int i,j,n,k=1;
    printf("Enter the number of term: ");
    scanf("%d", &n);

    for(i=1; k<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d", k++);
            if(k>n){
               break;
            }
        }
        printf("\n");
    }

    return 0;
}

