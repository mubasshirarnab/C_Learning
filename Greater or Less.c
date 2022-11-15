#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a==b){
        printf("\n%d is equal to %d", a,b);
    }
    else if(a>b){
        printf("\n%d is greater than %d", a,b);
    }
    else{
        printf("\n%d is less than %d", a,b);
    }

    return 0;
}
