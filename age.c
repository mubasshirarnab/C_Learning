#include<stdio.h>

int main()
{
    int N;
    printf("Enter the age: ");
    scanf("%d", &N);

    if(N<1){
        printf("Invalid age");
    }
    else if(N<=12){
        printf("Kid");
    }
    else if(N<=18){
        printf("Teenager");
    }
    else if(N<=29){
        printf("Young Adult");
    }
    else if(N<=40){
        printf("Adult");
    }
    else if(N<=55){
        printf("Middle Aged");
    }
    else if(N>55){
        printf("Senior");
    }
    else{
        printf("Dead");
    }

    return 0;

}
