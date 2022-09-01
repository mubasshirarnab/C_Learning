#include<stdio.h>

int main()
{
    int age;
    printf("Please enter any age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("Eligible");
    }
    else if(age<18){
        printf("Not Eligible");
    }
    else{
        printf("Kid");
    }

    return 0;
}
