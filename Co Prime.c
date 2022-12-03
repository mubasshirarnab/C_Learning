#include<stdio.h>

int main()
{
    int num1,num2,i,x;
    printf("Enter the value of Number1: ");
    scanf("%d", &num1);
    printf("Enter the value of Number2: ");
    scanf("%d", &num2);

    for(i=1; i<=num1; i++){
        if(num1%i==0 && num2%i==0){
            x=i;
        }
    }
    if(x==1){
        printf("%d and %d is Co-Prime", num1,num2);
    }
    else{
        printf("%d and %d is not Co-Prime", num1,num2);
    }

    return 0;
}

