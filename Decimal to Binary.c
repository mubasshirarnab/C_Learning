#include<stdio.h>

int main()
{
    int n,i,j;
    int rem;
    int a[10];

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\nThe Binary of %d is: ", n);

    while(n!=0){
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
    }
    for(j=i-1; j>=0; j--){
        printf("%d", a[j]);
    }

    return 0;
}


