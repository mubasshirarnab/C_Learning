#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    int *nPtr = &a;
    int *mPtr = &b;

    if(*nPtr>*mPtr){
        printf("%d is Greater than %d", *nPtr,*mPtr);
    }
    else{
        printf("%d is less than %d", *nPtr, *mPtr);
    }

    return 0;
}
