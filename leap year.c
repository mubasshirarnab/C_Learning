#include <stdio.h>

int main()
{
    int y;
    printf("Please enter any Year: ");
    scanf("%d", &y);

    if(y%400==0){
        printf("The Year is Leap Year\n");
    }
    else if(y%100==0){
        printf("The Year is not Leap Year\n");
    }
    else if(y%4==0){
        printf("The Year is Leap Year\n");
    }
    else{
        printf("The Year is not Leap Year\n");
    }

    return 0;

}
