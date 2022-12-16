#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a,&b);
    int *nPtr, *mPtr;

    nPtr = &a;
    mPtr = &b;

    int temp;

    temp = *nPtr;
    *nPtr = *mPtr;
    *mPtr = temp;

    printf("The changed value is a=%d , b=%d", *nPtr, *mPtr);

    return 0;
}
