#include<stdio.h>

int main()
{
    int i,j;


    for(i=2; i>=1; i--){
        for (j=1; j<=i; j++){
            printf("%d %d\n", i, j);
        }
        printf("%d %d\n", i, j);
    }

    printf("%d %d", i, j);

}
