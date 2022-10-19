#include<stdio.h>

int main()
{
    int i, n, num;
    int sum=0;
    printf("Enter the number of term: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%d", &num);
        printf("%dth number: %d\n",i,num);
        if(num>0){
            sum=sum+num;
        }
    }
    printf("\nThe sum is: %d\n", sum);

    return 0;
}
