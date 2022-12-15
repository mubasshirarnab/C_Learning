#include<stdio.h>

int main()
{
    int array[5];
    for(int i=0; i<5; i++){
        scanf("%d", &array[i]);
    }
    int *nPtr;

    nPtr = array;

    for(int i=0; i<5; i++){
        printf("%d ", nPtr);
    }

    return 0;
}
