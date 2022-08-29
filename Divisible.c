#include<stdio.h>

int main()
{
    int a;
    printf("Please enter a number: ");
    scanf("%d", &a);

    if(a%5==0 && a%11==0){
        printf("Divisible by 5 and 11");
    }
    else if(a%5==0){
        printf("Divisible by 5");
    }
    else if(a%11==0){
        printf("Divisible by 11");
    }
    else{
        printf("Not Divisible");
    }

    return 0;
}
