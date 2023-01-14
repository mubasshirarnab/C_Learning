#include<stdio.h>

int main()
{
    int i,n,sum=0,count=1;

    printf("Enter the number of term: ");
    scanf("%d", &n);

    for(i=1; count<=n; i++){
        sum=sum+count;
        count++;
        printf("%d,", sum);
    }

    return 0;
}
