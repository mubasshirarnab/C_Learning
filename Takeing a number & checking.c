#include<stdio.h>

int main()
{
    int N,a;
    printf("Enter a Number: ");
    scanf("%d", &N);

    while(1){
        printf("Enter your input: ");
        scanf("%d", &a);

        if(a==N){
            printf("Congratulations! Your input is equal to N!\n");
            break;
        }
        else if(a>N){
            printf("Your input is greater than N\n");
        }
        else{
            printf("Your input is less than N\n");
        }
    }

    return 0;
}
