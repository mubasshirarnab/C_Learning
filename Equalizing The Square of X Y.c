#include<stdio.h>

int main()
{
    int p,X,Y;
    printf("Enter the two numbers: ");
    scanf("%d %d", &X,&Y);

    while(X>Y){
        p=X*X;
        X--;
        printf("%d, ", p);
    }
    while(X<Y){
        p=X*X;
        X++;
        printf("%d, ", p);
    }
    if(X==Y){
        printf("Reached!");
    }

    return 0;
}
