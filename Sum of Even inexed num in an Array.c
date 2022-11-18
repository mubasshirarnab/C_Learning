#include<stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int array[n];

    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
        if(i%2==0){
            sum=sum+array[i];
        }
    }
    printf("The sum is: %d\n", sum);

    return 0;
}
