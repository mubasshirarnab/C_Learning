#include<stdio.h>

int main()
{
    int n,i,cube;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        cube=i*i*i;

        printf("%d Cube is %d\n", i, cube);
    }

    return 0;
}
