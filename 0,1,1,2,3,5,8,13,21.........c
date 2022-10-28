//0,1,1,2,3,5,8,13,21,34,55,89,..........


#include<stdio.h>

int main()
{
    int i=1,n=0,n1=1;
    int sum,term;
    printf("Enter the number of term: ");
    scanf("%d",&term);

    printf("%d,%d,",n,n1);

    sum=n+n1;

    for(i=3; i<=term; i++){
        printf("%d,", sum);
        n=n1;
        n1=sum;
        sum=n+n1;
    }

    return 0;
}
