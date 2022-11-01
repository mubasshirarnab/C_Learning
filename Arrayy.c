#include<stdio.h>

int main()
{
    int i,array[5];
    int sum=0;

    for(i=0; i<5; i++){
    printf("The %d index is: ", i);
    scanf("%d", &array[i]);

    sum=sum+array[i];
    }
    printf("The Sum is: %d\n", sum);

    return 0;
}
