#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the n  num of Odd number: ");
    scanf("%d", &n);
    int count=0;

    for(i=1;count<n;i=i+2){
        printf("%d\n",i);
        count++;
    }

    return 0;
}
